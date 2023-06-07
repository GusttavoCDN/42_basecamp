/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 04:58:10 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/07 07:30:58 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	res;
// 	int	index;

// 	index = 0;
// 	while (index < 12)
// 	{
// 		res = ft_fibonacci(index);
// 		printf("%d, ", res);
// 		index++;
// 	}
// 	res = ft_fibonacci(index);
// 	printf("%d\n", res);
// 	return (0);
// }
