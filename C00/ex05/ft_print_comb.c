/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:33:21 by gusda-si          #+#    #+#             */
/*   Updated: 2023/05/26 14:40:16 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putcomma(void);
void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int	first_n;
	int	second_n;
	int	third_n;

	first_n = 0;
	while (first_n <= 7)
	{
		second_n = first_n + 1;
		while (second_n <= 8)
		{
			third_n = second_n + 1;
			while (third_n <= 9)
			{
				ft_putchar(first_n + '0');
				ft_putchar(second_n + '0');
				ft_putchar(third_n + '0');
				if (first_n == 7 && second_n == 8 && third_n == 9)
					return ;
				ft_putcomma();
				third_n++;
			}
			second_n++;
		}
		first_n++;
	}
}

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	ft_putcomma(void)
{
	write(STDOUT_FILENO, ", ", 2);
}
