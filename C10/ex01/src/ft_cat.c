/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:42:50 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/02 18:15:53 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ex01.h"

void	ft_cat(int fd)
{
	char	buffer[BUFFER_SIZE + NULL_BYTE];
	ssize_t	bytes_read;

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	buffer[bytes_read] = '\0';
	while (bytes_read > 0)
	{
		ft_putstr_fd(buffer, STDOUT_FILENO);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		buffer[bytes_read] = '\0';
	}
}
