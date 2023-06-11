/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_handlers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 00:58:43 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/11 02:49:14 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush02.h"

static void		ft_fill_dict(t_dict **dict_buffer, char *buffer, size_t lines);
static t_dict	*ft_create_dict_pair(char *line);

void	ft_read_dict(char *buffer, char *dict_path)
{
	int	dict_fd;

	dict_fd = open(dict_path, O_RDONLY);
	read(dict_fd, buffer, MAX_BUFFER_SIZE);
	close(dict_fd);
}

t_dict	**ft_format_dict(char *buffer)
{
	size_t	lines;
	t_dict	**dict_buffer;

	lines = ft_count_lines(buffer);
	dict_buffer = (t_dict **)malloc(sizeof(t_dict) * (lines));
	if (dict_buffer == NULL)
		return (NULL);
	ft_fill_dict(dict_buffer, buffer, lines);
	return (dict_buffer);
}

static void	ft_fill_dict(t_dict **dict_buffer, char *buffer, size_t lines)
{
	size_t	i;
	size_t	line_len;
	size_t	buffer_i;
	char	*line_content;

	line_len = 0;
	buffer_i = 0;
	i = 0;
	while (i < lines)
	{
		line_len = ft_line_len((buffer + buffer_i));
		line_content = ft_get_line_content((buffer + buffer_i), line_len);
		dict_buffer[i] = ft_create_dict_pair(line_content);
		buffer_i += line_len + 1;
		i++;
	}
}

static t_dict	*ft_create_dict_pair(char *line)
{
	t_dict	*pair;

	pair = (t_dict *)malloc(sizeof(t_dict));
	if (*line == '\0')
	{
		pair = NULL;
		return (pair);
	}
	if (pair == NULL)
		return (NULL);
	pair->key = ft_atoi(line);
	pair->value = ft_trim_line(line);
	return (pair);
}
