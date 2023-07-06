/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:38:55 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/06 14:48:15 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ex02.h"

static void	handle_no_argument(void);
static int	handle_errors(int error_num, char *filepath);
static void	handle_with_no_flag(int *exit_status,
								int argc,
								const char **argv);
static void	handle_with_c_flag(int *exit_status, int argc, const char **argv);
static void	validate_flag(int *exit_status, char *flag, char *flag_value);

int	main(int argc, char const *argv[])
{
	int	exit_status;

	exit_status = EXIT_SUCCESS;
	if (argc == 1)
		handle_no_argument();
	if (argc >= 2 && strncmp(argv[1], "-", 1) != 0)
		handle_with_no_flag(&exit_status, argc, argv);
	else
		handle_with_c_flag(&exit_status, argc, argv);
	return (exit_status);
}

static void	handle_with_c_flag(int *exit_status, int argc, const char **argv)
{
	size_t	current_file;
	int		fd;

	validate_flag(exit_status, (char *)argv[1], (char *)argv[2]);
	if (*exit_status == EXIT_FAILURE)
		return ;
	current_file = 3;
	if (!argv[current_file])
		handle_no_argument();
	while (current_file < (size_t)argc)
	{
		fd = open(argv[current_file], O_RDONLY);
		if (fd < 0)
			*exit_status = handle_errors(errno, (char *)argv[current_file]);
		else
		{
			ft_tail(fd, (char *)argv[current_file], (char *)argv[1],
					atoi(argv[2]));
			close(fd);
		}
		current_file++;
	}
}

static void	validate_flag(int *exit_status, char *flag, char *flag_value)
{
	size_t	counter;

	counter = 0;
	if (strncmp(flag, "-c", 2) != 0)
	{
		*exit_status = handle_errors(errno, flag);
		return ;
	}
	while (flag_value[counter] != '\0')
	{
		if (!isdigit(flag_value[counter]))
		{
			*exit_status = handle_errors(errno, flag_value);
			return ;
		}
		counter++;
	}
}

static void	handle_with_no_flag(int *exit_status, int argc, const char **argv)
{
	size_t	counter;
	int		fd;

	counter = 1;
	while (counter < (size_t)argc)
	{
		fd = open(argv[counter], O_RDONLY);
		if (fd < 0)
			*exit_status = handle_errors(errno, (char *)argv[counter]);
		else
		{
			ft_tail(fd, (char *)argv[counter], NULL, 0);
			close(fd);
		}
		counter++;
	}
}

static void	handle_no_argument(void)
{
	char	buffer[BUFFER_SIZE];

	while (read(STDIN_FILENO, buffer, BUFFER_SIZE))
		;
}

static int	handle_errors(int error_num, char *filepath)
{
	if (errno == 0)
	{
		ft_putstr_fd("tail: invalid number of bytes: ", STDERR_FILENO);
		ft_putstr_fd("'", STDERR_FILENO);
		ft_putstr_fd(basename(filepath), STDERR_FILENO);
		ft_putstr_fd("'\n", STDERR_FILENO);
	}
	else
	{
		ft_putstr_fd("tail: ", STDERR_FILENO);
		ft_putstr_fd("cannot open '", STDERR_FILENO);
		ft_putstr_fd(basename(filepath), STDERR_FILENO);
		ft_putstr_fd("' for reading: ", STDERR_FILENO);
		ft_putstr_fd(strerror(error_num), STDERR_FILENO);
		ft_putstr_fd("\n", STDERR_FILENO);
	}
	return (EXIT_FAILURE);
}
