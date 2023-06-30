/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:00:04 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/26 09:44:56 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush01.h"

void	debug_array(int **board, size_t size)
{
	size_t	columns;
	size_t	rows;

	rows = 0;
	while (rows < size)
	{
		columns = 0;
		while (columns < size)
		{
			printf("%d || ", board[rows][columns]);
			columns++;
		}
		printf("\n");
		rows++;
	}
}
