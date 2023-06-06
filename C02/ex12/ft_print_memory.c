/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 12:23:17 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/06 10:54:22 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define HEX_BASE "0123456789abcdef"
#define HEX_BASE_LEN 16

void	ft_putchar(char c);
void	ft_print_mem_addr(void *addr);
void	ft_print_str(char *str);
void	ft_form_str_hexa_line(char *src, char *hexa_line);

void	*ft_print_memory(void *addr, unsigned int size)
{
	void	*pointer_to_addr;

	if (size <= 1)
		return (addr);
	pointer_to_addr = addr;
	while (pointer_to_addr < addr + size)
	{
		ft_print_mem_addr(pointer_to_addr);
		write(STDOUT_FILENO, ": ", 2);
		ft_print_str(pointer_to_addr);
		ft_putchar('\n');
		pointer_to_addr += HEX_BASE_LEN;
	}
	return (addr);
}

void	ft_print_mem_addr(void *addr)
{
	unsigned long	address;

	address = (unsigned long)addr;
	if (address < 9)
		return (ft_putchar(HEX_BASE[address % HEX_BASE_LEN]));
	ft_print_mem_addr((void *)(address / HEX_BASE_LEN));
	ft_putchar(HEX_BASE[address % HEX_BASE_LEN]);
}

void	ft_print_str(char *str)
{
	char	buffer_str_hexa_line[(HEX_BASE_LEN * 2) + 1];
	int		char_counter;

	char_counter = 0;
	ft_form_str_hexa_line(str, buffer_str_hexa_line);
	while (buffer_str_hexa_line[char_counter] != '\0')
	{
		write(STDOUT_FILENO, &buffer_str_hexa_line[char_counter++], 1);
		if (char_counter % 4 == 0)
			ft_putchar(' ');
	}
	char_counter = 0;
	while (*str && char_counter < HEX_BASE_LEN)
	{
		if (*str < 32 || *str > 126)
			write(STDOUT_FILENO, ".", 1);
		else
			write(STDOUT_FILENO, str, 1);
		str++;
		char_counter++;
	}
}

void	ft_form_str_hexa_line(char *src, char *hexa_line)
{
	int				i;
	int				j;
	unsigned int	asc_value;

	i = 0;
	j = 0;
	while (*src && j < HEX_BASE_LEN)
	{
		asc_value = (unsigned int)*src;
		hexa_line[i++] = HEX_BASE[asc_value / HEX_BASE_LEN];
		hexa_line[i++] = HEX_BASE[asc_value % HEX_BASE_LEN];
		src++;
		j++;
	}
	while (i < (HEX_BASE_LEN * 2))
		hexa_line[i++] = ' ';
	hexa_line[i] = '\0';
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_print_memory("Gustavo", 8);
// 	return (0);
// }
