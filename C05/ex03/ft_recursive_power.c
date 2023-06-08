/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 04:51:57 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/08 19:10:46 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>

// void	ft_recursive_power_test(int nb, int power)
// {
// 	int	res;

// 	res = ft_recursive_power(nb, power);
// 	printf(" nb = %d, power = %d, result: %d\n", nb, power, res);
// }

// int	main(void)
// {
// 	int	nb;
// 	int	power;

// 	// testando potencias negativas(deve retornar 0)
// 	printf("[1] Potencias negativas(deve retornar 0)\n");
// 	nb = -4;
// 	while (nb <= 4)
// 	{
// 		power = -4;
// 		while (power < 0)
// 		{
// 			ft_recursive_power_test(nb, power);
// 			power++;
// 		}
// 		nb++;
// 	}
// 	// testando potencias 0(deve retornar 1)
// 	printf("[2] Potencias 0(deve retornar 1)\n");
// 	nb = -4;
// 	power = 0;
// 	while (nb <= 4)
// 	{
// 		ft_recursive_power_test(nb, power);
// 		nb++;
// 	}
// 	// testando potencias 0(deve retornar 1)
// 	printf("[3] Potencias positivas(deve retorn a potencia)\n");
// 	nb = -4;
// 	while (nb <= 4)
// 	{
// 		power = 1;
// 		while (power <= 4)
// 		{
// 			ft_recursive_power_test(nb, power);
// 			power++;
// 		}
// 		nb++;
// 	}
// 	return (0);
// }
