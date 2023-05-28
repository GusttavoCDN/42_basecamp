/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:37:36 by gusda-si          #+#    #+#             */
/*   Updated: 2023/05/26 15:19:48 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);
void	ft_putnbr(int n);

void	ft_print_comb2(void)
{
	int	first_number;
	int	second_number;

	first_number = 0;
	second_number = 1;
	while (first_number <= 98)
	{
		while (second_number <= 99)
		{
			if (first_number < 9)
				ft_putchar('0');
			ft_putnbr(first_number);
			ft_putchar(' ');
			if (second_number < 9)
				ft_putchar('0');
			ft_putnbr(second_number);
			if (first_number == 98 && second_number == 99)
				return ;
			ft_putchar(',');
			ft_putchar(' ');
			second_number++;
		}
		first_number++;
		second_number = first_number + 1;
	}
}

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 10)
	{
		ft_putchar(n + '0');
		return ;
	}
	ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}
