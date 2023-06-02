/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:42:46 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/01 23:48:06 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	left_side;
	int	right_side;

	left_side = 0;
	right_side = size - 1;
	while (left_side < right_side)
	{
		temp = tab[left_side];
		tab[left_side] = tab[right_side];
		tab[right_side] = temp;
		right_side--;
		left_side++;
	}
}
