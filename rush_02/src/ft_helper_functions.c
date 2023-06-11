/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 01:53:11 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/11 02:57:06 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush02.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (TRUE);
	return (FALSE);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	length;
	size_t	i;

	length = ft_strlen(src);
	if (size <= 0)
		return (length);
	i = 0;
	while (src[i] && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (length);
}

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length])
		length++;
	return (length);
}

int		ft_isspace(int c);

int	ft_atoi(char *str)
{
	int	number;
	int	signal;

	while (ft_isspace(*str))
		str++;
	signal = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	number = 0;
	while ((*str >= '0' && *str <= '9') && (*str != '\0'))
	{
		number *= 10;
		number += *str - '0';
		str++;
	}
	return (number * signal);
}

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f'
		|| c == '\v')
		return (1);
	return (0);
}
