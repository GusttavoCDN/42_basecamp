/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:41:27 by gusda-si          #+#    #+#             */
/*   Updated: 2023/05/26 14:39:29 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = '0'; // '0' here is actually the number 48 in ASCII TABLE.
	while (i <= '9')
	{
		write(STDOUT_FILENO, &i, 1);
		i++;
	}
}
