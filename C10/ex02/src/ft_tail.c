/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:59:02 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/06 14:48:16 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ex02.h"

static size_t	count_file_bytes(char *filepath);
static char		*get_tail(char *file);

void	ft_tail(int fd, char *filepath, char *flag, int flag_value)
{
	size_t	file_size;
	char	*buffer;

	file_size = count_file_bytes(filepath);
	buffer = (char *)malloc((file_size + NULL_BYTE) * sizeof(char));
	buffer[read(fd, buffer, file_size)] = '\0';
	if (!flag)
		ft_putstr_fd(get_tail(buffer), STDOUT_FILENO);
	else
		ft_putstr_fd(&buffer[file_size - flag_value], STDOUT_FILENO);
	free(buffer);
}

static char	*get_tail(char *file)
{
	ssize_t	lines_qnt;
	ssize_t	line_break_counter;
	size_t	file_position;

	lines_qnt = 1;
	file_position = 0;
	while (file[file_position] != '\0')
	{
		if (file[file_position] == '\n')
			lines_qnt++;
		file_position++;
	}
	file_position = 0;
	line_break_counter = 0;
	if ((lines_qnt - 10) >= 0)
	{
		while (line_break_counter < (lines_qnt - 10))
		{
			if (file[file_position] == '\n')
				line_break_counter++;
			file_position++;
		}
	}
	return (&file[file_position]);
}

static size_t	count_file_bytes(char *filepath)
{
	char	buffer[BUFFER_SIZE + NULL_BYTE];
	ssize_t	total_bytes;
	ssize_t	bytes_read;
	int		fd;

	fd = open(filepath, O_RDONLY);
	if (fd < 0)
		return (0);
	total_bytes = 0;
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		total_bytes += bytes_read;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	close(fd);
	return (total_bytes);
}
