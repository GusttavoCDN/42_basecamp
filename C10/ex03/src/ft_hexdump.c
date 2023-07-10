/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:10:18 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/06 15:56:29 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ex03.h"

int	ft_hexdump(int fd)
{
	char	*buffer;
	ssize_t	bytes_read;
	size_t	total_bytes_read;

	buffer = (char *)malloc((BUFFER_SIZE + NULL_BYTE) * sizeof(char));
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read < BUFFER_SIZE)
	{
		total_bytes_read += bytes_read;
		while (total_bytes_read < BUFFER_SIZE)
		{
			bytes_read = (fd, buffer, BUFFER_SIZE - total_bytes_read);
			total_bytes_read += bytes_read;
		}
	}
	printf("%s", buffer);
	return (EXIT_SUCCESS);
}
