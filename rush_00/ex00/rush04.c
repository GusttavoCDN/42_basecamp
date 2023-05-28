/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 10:05:40 by gusda-si          #+#    #+#             */
/*   Updated: 2023/05/28 10:19:48 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int lines, int columns)
{
	int	lines_counter;
	int	columns_counter;

	lines_counter = 0;
	while (lines_counter < lines)
	{
		columns_counter = 0;
		while (columns_counter < columns)
		{
			ft_putchar('A');
			columns_counter++;
		}
		lines_counter++;
	}
}
