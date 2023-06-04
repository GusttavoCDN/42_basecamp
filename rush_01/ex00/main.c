/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 10:40:23 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/04 12:24:16 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/rush01.h"

int	main(int argc, char *argv[])
{
	if (argc != ARG_SIZE || !ft_is_input_valid(argv[1]))
	{
		ft_putstr("\033[1;31mError\033[0m\n");
		return (ERROR_VALIDATION_CODE);
	}
	return (0);
}
