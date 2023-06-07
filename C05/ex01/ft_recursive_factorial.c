/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 04:48:17 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/07 06:44:44 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

// int	main(void)
// {
// 	int nb;
// 	int res;

// 	nb = -5;
// 	while (nb <= 10)
// 	{
// 		res = ft_recursive_factorial(nb);
// 		printf("> n = %d, n! = %d\n", nb, res);
// 		nb++;
// 	}
// 	return (0);
// }
