/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:31:35 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/08 13:13:19 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Remember to improve this function to add a NULL pointer in the
// end of the array after the Piscine

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	if (!range)
		return (-1);
	i = 0;
	size = (max - min) * sizeof(int);
	*range = (int *)malloc(size);
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}

// int	main(void)
// {
// 	int	*range;

// 	ft_ultimate_range(&range, 0, 10);
// 	return (0);
// }
