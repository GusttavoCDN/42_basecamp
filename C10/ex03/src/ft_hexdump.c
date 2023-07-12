/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:10:18 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/12 02:54:48 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ex03.h"

static void	print_str_and_hex(char *str);
static void	print_hex_value(unsigned char c);
static void	print_string(char *str);

int	ft_hexdump(int fd)
{
	char	*buffer;
	ssize_t	bytes_read;
	size_t	total_bytes_read;

	buffer = (char *)malloc((BUFFER_SIZE + NULL_BYTE) * sizeof(char));
	total_bytes_read = 0;
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	buffer[bytes_read] = '\0';
	while (bytes_read == BUFFER_SIZE)
	{
		print_str_and_hex(buffer);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		buffer[bytes_read] = '\0';
	}
	if (bytes_read > 0)
		print_str_and_hex(buffer);
	free(buffer);
	return (EXIT_SUCCESS);
}

static void	print_string(char *str)
{
	while (*str != '\0')
	{
		if (isspace(*str))
			ft_putchar('.');
		else
			ft_putchar(*str);
		str++;
	}
}

static void	print_str_and_hex(char *str)
{
	size_t	position;

	position = 0;
	while (str[position] != '\0')
	{
		print_hex_value(str[position]);
		if (position % 2 > 0)
			ft_putchar(' ');
		position++;
	}
	while (position < 16)
	{
		ft_putstr_fd("  ", STDOUT_FILENO);
		if (position % 2 > 0)
			ft_putchar(' ');
		position++;
	}
	print_string(str);
	ft_putchar('\n');
}

static void	print_hex_value(unsigned char c)
{
	char	hex_value[3];
	size_t	counter;

	hex_value[0] = '0';
	hex_value[2] = '\0';
	counter = 1;
	while ((int)c > 0)
	{
		hex_value[counter--] = HEX_BASE[c % HEX_BASE_LEN];
		c /= HEX_BASE_LEN;
	}
	ft_putstr_fd(hex_value, STDOUT_FILENO);
}
