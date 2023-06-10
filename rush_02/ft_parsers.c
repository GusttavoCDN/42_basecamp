/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 12:11:57 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/10 15:21:39 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number_converter.h"

void	ft_read_dict(char *buffer, char *dict_path);
t_dict	*ft_format_dict(char *buffer);
int		ft_count_lines(char *buffer);
void	ft_fill_dict(t_dict **dict, char *buffer, size_t lines);
int		ft_line_len(char *line);
t_dict	*ft_create_dict_pair(char *line);
char	*ft_get_line_content(char *line, size_t line_len);
int		ft_isalpha(int c);
char	*ft_trim_line(char *line);

int	ft_parse_with_default_dict(char *number)
{
	char	buffer[MAX_BUFFER_SIZE + 1];
	t_dict	*dict;
	int		nbr_to_convert;

	nbr_to_convert = ft_atoi(number);
	if (nbr_to_convert < 0)
		return (FALSE);
	ft_read_dict(buffer, DEFAULT_DICT_PATH);
	ft_format_dict(buffer);
}

void	ft_read_dict(char *buffer, char *dict_path)
{
	int	dict_fd;

	dict_fd = open(dict_path, O_RDONLY);
	read(dict_fd, buffer, MAX_BUFFER_SIZE);
	close(dict_fd);
}

t_dict	*ft_format_dict(char *buffer)
{
	size_t	lines;
	size_t	counter;
	t_dict	**dict_buffer;

	lines = ft_count_lines(buffer);
	dict_buffer = (t_dict **)malloc(sizeof(t_dict) * (lines + 1));
	if (dict_buffer == NULL)
		return (NULL);
	ft_fill_dict(dict_buffer, buffer, lines);
}

void	ft_fill_dict(t_dict **dict_buffer, char *buffer, size_t lines)
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
	dict_buffer[i] = NULL;
}

t_dict	*ft_create_dict_pair(char *line)
{
	t_dict	*pair;

	pair = (t_dict *)malloc(sizeof(t_dict));
	if (pair == NULL)
		return (NULL);
	pair->key = ft_atoi(line);
	pair->value = ft_trim_line(line);
	return (pair);
}

char	*ft_trim_line(char *line)
{
	while (!ft_isalpha(*line))
		line++;
	return (line);
}

char	*ft_get_line_content(char *line, size_t line_len)
{
	char	*content;

	content = (char *)malloc(sizeof(char) * (line_len + 1));
	if (content == NULL)
		return (NULL);
	ft_strlcpy(content, line, line_len + 1);
	return (content);
}

int	ft_line_len(char *line)
{
	int	len;

	len = 0;
	while (line[len] != '\n' && line[len] != '\0')
		len++;
	return (len);
}

int	ft_count_lines(char *buffer)
{
	size_t	lines;

	lines = 0;
	while (*buffer != '\0')
	{
		if (*buffer == '\n')
			lines++;
		buffer++;
	}
	return (lines + 1);
}

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (TRUE);
	return (FALSE);
}
