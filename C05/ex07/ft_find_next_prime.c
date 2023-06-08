/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:51:46 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/08 19:10:34 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	if (nb == 2147483647)
		return (1);
	n = 3;
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	while (!ft_is_prime(nb) && nb < 2147483647)
		nb++;
	return (nb);
}
