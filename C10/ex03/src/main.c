/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:10:37 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/12 00:11:43 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ex03.h"

int	main(int argc, char *argv[])
{
	int	fd;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	ft_hexdump(fd);
	close(fd);
	return (EXIT_SUCCESS);
}
