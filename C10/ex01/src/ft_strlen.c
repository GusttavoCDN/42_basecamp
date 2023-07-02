/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 22:35:05 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/02 18:02:01 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ex01.h"

size_t	ft_strlen(const char *s)
{
	char	*s_begin;

	if (s == NULL)
		return (0);
	s_begin = (char *)s;
	while (*s != '\0')
		s++;
	return ((size_t)(s - s_begin));
}
