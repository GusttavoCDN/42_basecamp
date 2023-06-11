/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_handlers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 01:47:16 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/11 02:27:06 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush02.h"

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

char	*ft_trim_line(char *line)
{
	while (!ft_isalpha(*line))
		line++;
	return (line);
}
