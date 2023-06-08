/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 04:41:01 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/08 19:11:06 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	int	n;
// 	int	res;

// 	n = -5;
// 	while (n <= 10)
// 	{
// 		res = ft_iterative_factorial(n);
// 		printf("n = %d, n! = %d\n", n, res);
// 		n++;
// 	}
// 	return (0);
// }
