/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scrummaster.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:11:22 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/26 09:44:56 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush01.h"

t_contraints	*initatilize_contraints(int *contraints, size_t side_len);

int	show_error(void)
{
	printf("Error");
	return (2);
}

int	main(int argc, char **argv)
{
	int				can_create_board;
	int				board_size;
	t_contraints	*constraints;
	int				**board;

	if (argc == 2)
	{
		can_create_board = is_input_valid(4, argv[1]);
		if (!can_create_board)
			return (show_error());
		constraints = initatilize_contraints(create_constraints_array(4 * 4,
																		argv[1]),
												4);
		board = create_board(4);
		resolve_board(constraints, board, 4);
	}
	if (argc == 3)
	{
		board_size = ft_atoi(argv[1]);
		can_create_board = is_input_valid(board_size, argv[2]);
		if (!can_create_board)
			return (show_error());
		// constraints = create_constraints_array(board_size * board_size,
		// 										argv[1]);
	}
	// printf("Passe um ou dois parametros animal");
	return (2);
}
t_contraints	*initatilize_contraints(int *contraints, size_t side_len)
{
	t_contraints	*contraints_obj;
	size_t			counter;

	contraints_obj = (t_contraints *)malloc(sizeof(t_contraints));
	counter = 0;
	contraints_obj->up = (int *)malloc(side_len * sizeof(int));
	contraints_obj->down = (int *)malloc(side_len * sizeof(int));
	contraints_obj->left = (int *)malloc(side_len * sizeof(int));
	contraints_obj->right = (int *)malloc(side_len * sizeof(int));
	while (counter < side_len)
	{
		contraints_obj->up[counter] = contraints[counter];
		contraints_obj->right[counter] = contraints[counter + side_len];
		contraints_obj->down[counter] = contraints[counter + (2 * side_len)];
		contraints_obj->left[counter] = contraints[counter + (3 * side_len)];
		counter++;
	}
	return (contraints_obj);
}
