/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 05:41:19 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/08 09:52:58 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
void	ft_print_rev_params(char *params[], int params_size);

int	main(int argc, char *argv[])
{
	if (argc > 0)
		ft_print_rev_params(argv, argc);
	return (0);
}

void	ft_print_rev_params(char *params[], int params_size)
{
	int	current_param;

	current_param = params_size - 1;
	while (current_param > 0)
	{
		ft_putstr(params[current_param--]);
		ft_putstr("\n");
	}
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(STDOUT_FILENO, str++, 1);
}
