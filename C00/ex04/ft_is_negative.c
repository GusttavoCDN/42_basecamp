/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:25:38 by gusda-si          #+#    #+#             */
/*   Updated: 2023/05/25 20:21:37 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);
void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n > 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
