/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:59:17 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/01 12:34:02 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00.h"

int	display_content(const char *filepath);

int	main(int argc, char const *argv[])
{
	if (argc == 1)
	{
		ft_putstr_fd("File name missing.\n", STDERR_FILENO);
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr_fd("Too many arguments.\n", STDERR_FILENO);
		return (1);
	}
	return (display_content(argv[1]));
}

int	display_content(const char *filepath)
{
	int		fd;
	char	buffer[BUFFER_SIZE + 1];

	fd = open(filepath, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_fd("Cannot read file.\n", STDERR_FILENO);
		return (1);
	}
	while (read(fd, buffer, BUFFER_SIZE))
		ft_putstr_fd(buffer, STDOUT_FILENO);
	close(fd);
	return (0);
}
