/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:56:50 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/02 12:32:56 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*str_begin;

	str_begin = src;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (str_begin);
}
