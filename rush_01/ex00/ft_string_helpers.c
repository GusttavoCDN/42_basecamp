/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 11:18:50 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/04 12:24:33 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/rush01.h"

void	ft_putstr(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	write(STDOUT_FILENO, str, str_len);
}

int	ft_strlen(char *str)
{
	char	*pointer;

	pointer = str;
	while (*pointer != '\0')
		pointer++;
	return (pointer - str);
}
