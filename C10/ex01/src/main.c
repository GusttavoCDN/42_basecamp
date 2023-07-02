/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:27:21 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/02 18:15:50 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ex01.h"

static int	handle_errors(int error_num, char *filepath);

int	main(int argc, char const *argv[])
{
	int		fd;
	size_t	counter;
	int		exit_status;

	exit_status = EXIT_SUCCESS;
	if (argc == 1)
	{
		ft_cat(STDIN_FILENO);
		return (exit_status);
	}
	counter = 1;
	while (counter < (size_t)argc)
	{
		fd = open(argv[counter], O_RDONLY);
		if (fd < 0)
			exit_status = handle_errors(errno, (char *)argv[counter]);
		else
		{
			ft_cat(fd);
			close(fd);
		}
		counter++;
	}
	return (exit_status);
}

static int	handle_errors(int error_num, char *filepath)
{
	ft_putstr_fd("cat: ", STDERR_FILENO);
	ft_putstr_fd(basename(filepath), STDERR_FILENO);
	ft_putstr_fd(": ", STDERR_FILENO);
	ft_putstr_fd(strerror(error_num), STDERR_FILENO);
	ft_putstr_fd("\n", STDERR_FILENO);
	return (EXIT_FAILURE);
}
