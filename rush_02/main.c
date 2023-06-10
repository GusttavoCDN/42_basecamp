/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 11:58:05 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/10 12:39:53 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number_converter.h"

// Just to remember, from the second position (1) the values on argv arrays are
// anything we receive as argument.

int	main(int argc, char *argv[])
{
	if (argc == 2)
		return (ft_parse_with_default_dict(argv[1]));
	// else if (argc == 3)
	// 	return (ft_parse_with_custom_dict(argv[1], argv[2]));
	else
		return (0);
}
