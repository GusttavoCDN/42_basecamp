/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers_functions2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 02:41:11 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/11 02:59:58 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush02.h"

void	ft_putstr(char *str)
{
	int	str_len;

	str_len = ft_strlen(str);
	write(STDOUT_FILENO, str, str_len);
}

int	ft_calc_nbr_digits(int number, int base_len)
{
	int	digits;

	digits = 1;
	number /= base_len;
	while (number)
	{
		digits++;
		number /= base_len;
	}
	return (digits);
}
