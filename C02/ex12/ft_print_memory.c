/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 12:23:17 by gusda-si          #+#    #+#             */
/*   Updated: 2023/05/28 09:56:46 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define HEX_BASE "0123456789abcdef"

void	ft_print_mem_addr(void	*addr);
void	ft_form_str_hexa_line(char *src, char *hexa_line);
void	ft_putchar(char c);
void	ft_print_str_in_hexa(char *str);

void	*ft_print_memory(void	*addr, unsigned int size)
{
	int	i;
	int	max_line_size;
	int	line_qnts;

	i = 0;
	max_line_size = 16;
	line_qnts = size / max_line_size;
	if (size == 0)
		return (addr);
	while (i < line_qnts)
	{
		ft_print_mem_addr(addr + (max_line_size * i));
		ft_print_str_in_hexa(addr + (max_line_size * i));
		ft_putchar('\n');
		i++;
	}
	return (addr);
}

void	ft_print_mem_addr(void *addr)
{
	int				i;
	char			str_mem[17];
	unsigned long	address;

	while (address > 0)
	{
		str_mem[i++] = HEX_BASE[address % 16];
		address /= 16;
	}
	str_mem[i] = '\0';
	while (i-- > 0)
		ft_putchar(str_mem[i]);
	ft_putchar(':');
	ft_putchar(' ');
}

void	ft_print_str_in_hexa(char *str)
{
	char	str_hexa_line[33];
	int		i;
	int		j;
	int		max_line_size;

	i = 0;
	j = 0;
	max_line_size = 16;
	ft_form_str_hexa_line(str, str_hexa_line);
	while (str_hexa_line[i])
	{
		ft_putchar(str_hexa_line[i++]);
		if (i % 4 == 0)
			ft_putchar(' ');
	}
	while (*str && j < max_line_size)
	{
		if (*str < 32 || *str > 126)
			ft_putchar('.');
		else
			ft_putchar(*str);
		str++;
		j++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_form_str_hexa_line(char *src, char *hexa_line)
{
	int				i;
	int				j;
	int				hex_char;
	unsigned int	asc_value;

	i = 0;
	j = 0;
	while (*src && j < 16)
	{
		asc_value = (unsigned int) *src;
		while (asc_value > 9)
		{
			hexa_line[i] = HEX_BASE[asc_value / 16];
			asc_value /= 16;
			i++;
		}
		hex_char = ((unsigned int) *src % 16);
		hexa_line[i] = HEX_BASE[hex_char];
		i++;
		src++;
		j++;
	}
	while (i < 32)
		hexa_line[i++] = ' ';
	hexa_line[i] = '\0';
}
