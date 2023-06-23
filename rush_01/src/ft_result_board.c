/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_result_board.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 00:55:17 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/23 01:57:49 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush01.h"

static size_t	generate_initial_number(int board_size);
void			debug_array(int **board);

int	**alloc_result_board(int board_size)
{
	int	**result_board;
	int	columns;

	result_board = (int **)malloc((board_size) * sizeof(int *));
	if (!result_board)
		return (NULL);
	columns = 0;
	while (columns < board_size)
	{
		result_board[columns] = (int *)malloc((board_size) * sizeof(int));
		columns++;
	}
	return (result_board);
}

void	complete_result_board(int board_size)
{
	int		**board;
	int		columns;
	int		rows;
	size_t	initial_value;

	initial_value = generate_initial_number(board_size);
	board = alloc_result_board(board_size);
	rows = 0;
	while (rows < board_size)
	{
		columns = 0;
		while (columns < board_size)
		{
			board[rows][columns] = initial_value;
			columns++;
		}
		rows++;
	}
	debug_array(board);
}

static size_t	generate_initial_number(int board_size)
{
	size_t	initial_value;

	initial_value = 0;
	while (board_size)
	{
		initial_value *= 10;
		initial_value += board_size--;
	}
	return (initial_value);
}

void	debug_array(int **board)
{
	size_t	columns;
	size_t	rows;

	rows = 0;
	while (rows < 9)
	{
		columns = 0;
		while (columns < 9)
		{
			printf("%d || ", board[rows][columns]);
			columns++;
		}
		printf("\n");
		rows++;
	}
}
