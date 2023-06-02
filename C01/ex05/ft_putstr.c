/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:39:09 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/01 23:21:10 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	write(STDOUT_FILENO, str, str_len);
}
