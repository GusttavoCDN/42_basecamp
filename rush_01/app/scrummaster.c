/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scrummaster.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:11:22 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/22 22:49:16 by gusda-si         ###   ########.fr       */
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

	if (argc == 2)
	{
		can_create_board = is_input_valid(4, argv[1]);
		if (!can_create_board)
			return (show_error());
		// resolve_board();
	}
	if (argc == 3)
	{
		can_create_board = is_input_valid(ft_atoi(argv[1]), argv[2]);
		if (!can_create_board)
			return (show_error());
		// resolve_board();
	}
	printf("Passe um ou dois parametros animal");
	return (2);
}
