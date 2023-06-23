/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scrummaster.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:11:22 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/23 01:58:00 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush01.h"

int	show_error(void)
{
	printf("Error");
	return (2);
}

int	main(int argc, char **argv)
{
	int	can_create_board;
	int	board_size;

	if (argc == 2)
	{
		can_create_board = is_input_valid(4, argv[1]);
		if (!can_create_board)
			return (show_error());
		//	create_constraints_array(4 * 4, argv[1]);
		complete_result_board(9);
	}
	if (argc == 3)
	{
		board_size = ft_atoi(argv[1]);
		can_create_board = is_input_valid(board_size, argv[2]);
		if (!can_create_board)
			return (show_error());
		//create_constraints_array(board_size * board_size, argv[1]);
	}
	// printf("Passe um ou dois parametros animal");
	return (2);
}




