/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 21:09:38 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/23 22:23:38 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush01.h"

static int	is_contraints_valids(int board_size, char *constraints);

int	is_input_valid(int board_size, char *constraints)
{
	if (board_size < 4 || board_size > 9)
		return (FALSE);
	if (!is_contraints_valids(board_size, constraints))
		return (FALSE);
	return (TRUE);
}

static int	is_contraints_valids(int board_size, char *constraints)
{
	size_t	expected_str_size;
	size_t	len;
	size_t	counter;

	len = (size_t)ft_strlen(constraints);
	expected_str_size = ((board_size * board_size) * 2) - 1;
	if (len != expected_str_size)
		return (FALSE);
	counter = 0;
	while (counter < len)
	{
		if ((counter % 2 == 1 && constraints[counter] != ' '))
			return (FALSE);
		if (counter % 2 == 0)
		{
			if (constraints[counter] < '1'
				|| ft_atoi(&constraints[counter]) > board_size)
				return (FALSE);
		}
		counter++;
	}
	return (TRUE);
}
