/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:02:15 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/26 09:44:56 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush01.h"

static void	fill_point_of_view_of_one(t_contraints *contraints, int **board,
				int board_size);

static void	fill_point_of_view_helper(int **board, char direction, int counter,
				int board_size);
static void	initialize_row_and_column(char direction,
										t_coordinates *coordinates,
										int position,
										int size);
static void	fill_point_of_view_of_all(t_contraints *contraints,
										int **board,
										int board_size);

int **
resolve_board(t_contraints *contraints, int **board, int board_size)
{
	fill_point_of_view_of_one(contraints, board, board_size);
	fill_point_of_view_of_all(contraints, board, board_size);
	fill_remove_impossible_possibilities()
	debug_array(board, board_size);
}

static void	fill_point_of_view_of_one(t_contraints *contraints, int **board,
		int board_size)
{
	size_t	counter;

	counter = 0;
	while (counter < (size_t)board_size)
	{
		if (contraints->up[counter] == 1)
			board[0][counter] = board_size;
		if (contraints->right[counter] == 1)
			board[counter][board_size - 1] = board_size;
		if (contraints->down[counter] == 1)
			board[board_size - 1][counter] = board_size;
		if (contraints->left[counter] == 1)
			board[counter][0] = board_size;
		counter++;
	}
}
static void	fill_point_of_view_of_all(t_contraints *contraints, int **board,
		int board_size)
{
	size_t	counter;
	size_t	position;

	position = 0;
	counter = 0;
	while (counter < (size_t)board_size)
	{
		if (contraints->up[counter] == board_size)
			fill_point_of_view_helper(board, 'd', counter, board_size);
		if (contraints->right[counter] == board_size)
			fill_point_of_view_helper(board, 'r', counter, board_size);
		if (contraints->down[counter] == board_size)
			fill_point_of_view_helper(board, 'u', counter, board_size);
		if (contraints->left[counter] == board_size)
			fill_point_of_view_helper(board, 'l', counter, board_size);
		counter++;
	}
}
static void	update_coordinates(int **board, int row, int column, int value)
{
	board[row][column] = value;
}

static void	fill_point_of_view_helper(int **board, char direction, int counter,
		int board_size)
{
	t_coordinates	coordinates;
	size_t			i;

	initialize_row_and_column(direction, &coordinates, counter, board_size);
	i = 0;
	if (direction == 'u' || direction == 'd')
	{
		while (i < (size_t)board_size)
		{
			update_coordinates(board, coordinates.row, coordinates.column, i
					+ 1);
			i++;
			if (direction == 'u')
				coordinates.row--;
			else
				coordinates.row++;
		}
	}
	else
	{
		while (i < (size_t)board_size)
		{
			update_coordinates(board, coordinates.row, coordinates.column, i
					+ 1);
			i++;
			if (direction == 'r')
				coordinates.column--;
			else
				coordinates.column++;
		}
	}
}

static void	initialize_row_and_column(char direction,
										t_coordinates *coordinates,
										int position,
										int size)
{
	if (direction == 'd' || direction == 'u')
	{
		coordinates->column = position;
		if (direction == 'd')
			coordinates->row = 0;
		else
			coordinates->row = size - 1;
	}
	if (direction == 'r' || direction == 'l')
	{
		coordinates->row = position;
		if (direction == 'r')
			coordinates->column = size - 1;
		else
			coordinates->column = 0;
	}
}
