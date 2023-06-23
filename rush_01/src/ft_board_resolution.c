/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_board_resolution.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 23:05:15 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/23 01:14:38 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush01.h"

// void	debug_array(int *arr);

int	*create_constraints_array(int len, char *constraints)
{
	int		*constraints_arr;
	size_t	counter;
	size_t	position;

	constraints_arr = (int *)malloc((len + 1) * sizeof(int));
	if (!constraints_arr)
		return (NULL);
	counter = 0;
	position = 0;
	while (*constraints != '\0')
	{
		if (counter % 2 == 0)
			constraints_arr[position++] = ft_atoi(constraints);
		counter++;
		constraints++;
	}
	constraints_arr[position] = -1;
	return (constraints_arr);
}

// void	debug_array(int *arr)
// {
// 	while (*arr != -1)
// 	{
// 		printf("%d", *arr);
// 		arr++;
// 	}
// }
