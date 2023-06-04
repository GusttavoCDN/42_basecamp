/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:25:34 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/04 00:28:57 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int number);
void	ft_putchar(char c);

void	ft_putnbr(int number)
{
	long int	nbr;

	nbr = number;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar('0' + (nbr % 10));
}

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
