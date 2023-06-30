/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:24:48 by gusda-si          #+#    #+#             */
/*   Updated: 2023/05/26 14:39:17 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	// The syntax &c to pass a char is to pass the address of the char in memory
	// STDOUT_FILENO is just a constant to represent the file descriptor, in
	// this case is 1 for standard output.
	write(STDOUT_FILENO, &c, 1);
}
