/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:27:32 by gusda-si          #+#    #+#             */
/*   Updated: 2023/05/26 14:39:16 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 'a';
	while (i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
