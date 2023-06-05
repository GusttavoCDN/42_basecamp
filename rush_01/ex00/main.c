/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 10:40:23 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/04 21:16:10 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/rush01.h"
#include <stdio.h>

#define ROWS 6
#define COLUMNS 6

#define CONSTRAINT_FIRST_LINE 0
#define CONSTRAINT_LAST_LINE 5
#define CONSTRAINT_FIRST_COLUMN 0
#define CONSTRAINT_LAST_COLUMN 5

void	ft_init_contrainsts_position(char *contraints);
int		ft_form_contrainst_line(int row, int col, char *str);
void	ft_fill_board(void);
int		ft_update_column(int row, int column, char direction,
			int initial_value);
int		ft_form_contraint_column(int row, int col, char *str);
void	print_board(void);
void	ft_fill_column(int begin, int end);
void	ft_found_four_contraints(void);
int		g_board[ROWS][COLUMNS];

int	main(int argc, char *argv[])
{
	if (argc != ARG_SIZE || !ft_is_input_valid(argv[1]))
	{
		ft_putstr("\033[1;31mError\033[0m\n");
		return (ERROR_VALIDATION_CODE);
	}
	ft_init_contrainsts_position(argv[1]);
	ft_fill_board();
	ft_found_four_contraints();
	return (0);
}

void	print_board(void)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			printf("%d ", g_board[i][j]);
		}
		printf("\n");
	}
}

void	ft_init_contrainsts_position(char *input)
{
	int	input_p;

	input_p = 0;
	input_p += ft_form_contrainst_line(0, 1, &input[input_p]);
	input_p += ft_form_contrainst_line(5, 1, &input[input_p]);
	input_p += ft_form_contraint_column(1, 0, &input[input_p]);
	input_p += ft_form_contraint_column(1, 5, &input[input_p]);
}

int	ft_form_contrainst_line(int row, int col, char *str)
{
	int	walked_bytes;
	int	interval;
	int	digit_position;

	walked_bytes = 0;
	interval = 4;
	digit_position = 0;
	while (walked_bytes < (interval * 2))
	{
		g_board[row][col] = str[walked_bytes] - '0';
		col++;
		walked_bytes += 2;
	}
	return (walked_bytes);
}

int	ft_form_contraint_column(int row, int col, char *str)
{
	int	walked_bytes;
	int	interval;
	int	digit_position;

	walked_bytes = 0;
	interval = 4;
	digit_position = 0;
	while (walked_bytes < (interval * 2))
	{
		g_board[row][col] = str[walked_bytes] - '0';
		row++;
		walked_bytes += 2;
	}
	return (walked_bytes);
}

void	ft_fill_board(void)
{
	int	colums_counter;
	int	rows_counter;

	rows_counter = CONSTRAINT_FIRST_LINE + 1;
	while (rows_counter < CONSTRAINT_LAST_LINE)
	{
		colums_counter = CONSTRAINT_FIRST_COLUMN + 1;
		while (colums_counter < CONSTRAINT_LAST_COLUMN)
		{
			g_board[rows_counter][colums_counter] = 1234;
			colums_counter++;
			print_board();
		}
		rows_counter++;
	}
}
void	ft_found_four_contraints(void)
{
	int	i;

	i = CONSTRAINT_FIRST_COLUMN + 1;
	while (i < COLUMNS)
	{
		if (g_board[CONSTRAINT_FIRST_LINE][i] == 4)
		{
			ft_update_column(CONSTRAINT_FIRST_LINE, i++, 'D', 1);
			break ;
		}
		i++;
	}
	i = CONSTRAINT_FIRST_COLUMN + 1;
	while (i < COLUMNS)
	{
		if (g_board[CONSTRAINT_LAST_LINE][i] == 4)
		{
			ft_update_column(CONSTRAINT_LAST_LINE, i++, 'U', 1);
			break ;
		}
		i++;
	}
}

void	ft_update_position(int row, int column, int value)
{
	g_board[row][column] = value;
	print_board();
}

int	ft_update_column(int row, int column, char direction, int initial_value)
{
	int	initial_position;
	int	current_value;
	int	last_position;

	if (direction == 'D')
	{
		initial_position = CONSTRAINT_FIRST_LINE + 1;
		last_position = CONSTRAINT_LAST_LINE - 1;
	}
	if (direction == 'U')
	{
		initial_position = CONSTRAINT_LAST_LINE - 1;
		last_position = CONSTRAINT_FIRST_LINE + 1;
	}
	current_value = initial_value;
	// initial 4 final + 1
	while (initial_position != last_position)
	{
		if (initial_position < last_position)
			ft_update_position(initial_position++, column, current_value++);
		else
			ft_update_position(initial_position--, column, current_value++);
	}
	ft_update_position(last_position, column, current_value++);
}

// void	ft_fill_column(int row, int column, int begin, int end)
// {
// 	while (begin != end)
// 	{
// 		if (begin < end)
// 		{
// 			g_board[row][column] =
// 				begin++;
// 		}
// 		else
// 			end--;
// 	}
// }
