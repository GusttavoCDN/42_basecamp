/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 10:40:23 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/04 19:31:25 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/rush01.h"
#include <stdio.h>

#define ROWS 6
#define COLUMNS 6

void	ft_init_contrainsts_position(char *contraints);
int		ft_form_contrainst_line(int row, int col, char *str);
int		ft_form_contraint_column(int row, int col, char *str);

int		g_board[ROWS][COLUMNS];

int	main(int argc, char *argv[])
{
	if (argc != ARG_SIZE || !ft_is_input_valid(argv[1]))
	{
		ft_putstr("\033[1;31mError\033[0m\n");
		return (ERROR_VALIDATION_CODE);
	}
	ft_init_contrainsts_position(argv[1]);
	return (0);
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
