/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 13:05:04 by gusda-si          #+#    #+#             */
/*   Updated: 2023/05/27 13:15:57 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define HEX_BASE "0123456789abcdef"

void	ft_putchar(char c);
void	ft_put_non_printable_char(char c);
void	put_str_non_printable(char *str);

void	put_str_non_printable(char *str)
{
	while (*str)
	{
		if ((*str >= 32 && *str <= 126))
			ft_putchar(*str);
		else
			ft_put_non_printable_char(*str);
		str++;
	}
}

void	ft_put_non_printable_char(char c)
{
	char	hex_char[4];
	int		i;

	i = 0;
	hex_char[0] = '\\';
	hex_char[1] = HEX_BASE[c / 16];
	hex_char[2] = HEX_BASE[c % 16];
	hex_char[3] = '\0';
	while (hex_char[i] != '\0')
		ft_putchar(hex_char[i++]);
}

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
