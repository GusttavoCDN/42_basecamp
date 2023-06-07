/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 04:51:02 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/07 06:49:01 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0 || (power == 0 && nb == 0))
		return (0);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// void	ft_iterative_power_test(int nb, int power)
// {
// 	int	res;

// 	res = ft_iterative_power(nb, power);
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
// 			ft_iterative_power_test(nb, power);
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
// 		ft_iterative_power_test(nb, power);
// 		nb++;
// 	}
// 	// testando potencias 0(deve retornar 1)
// 	printf("[3] Potencias positivas(deve retornar o numero elevado a potencia)\n");
// 	nb = -4;
// 	while (nb <= 4)
// 	{
// 		power = 1;
// 		while (power <= 4)
// 		{
// 			ft_iterative_power_test(nb, power);
// 			power++;
// 		}
// 		nb++;
// 	}
// 	ft_iterative_power_test(0, 0);
// 	return (0);
// }
