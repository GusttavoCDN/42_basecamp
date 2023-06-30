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

// Functions prototypes. Every function that we want to use as auxiliar must
// be declared before used. This is a way to tell the compiler that functions
// exists. The functions can be in other files or in the same file. In this
// case the functions are written below.
void	ft_putchar(char c);
void	ft_putcomma(void);
void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	first_n;
	char	second_n;
	char	third_n;

	first_n = '0';
	while (first_n <= '7')
	{
		second_n = (char)(first_n + 1);
		while (second_n <= '8')
		{
			third_n = (char)(second_n + 1);
			while (third_n <= '9')
			{
				ft_putchar(first_n);
				ft_putchar(second_n);
				ft_putchar(third_n);
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
