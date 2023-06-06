/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:25:34 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/06 11:03:47 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <limits.h>
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

// int	main(void)
// {
// 	ft_putnbr(INT_MIN);
// 	ft_putchar('\n');
// 	ft_putnbr(INT_MAX);
// 	return (0);
// }
