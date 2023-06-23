/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:41:27 by gusda-si          #+#    #+#             */
/*   Updated: 2023/05/26 14:39:29 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int	i;

	i = '1';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

