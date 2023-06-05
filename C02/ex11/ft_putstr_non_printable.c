/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 13:05:04 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/05 17:37:06 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #define HEX_BASE "0123456789abcdef"
// #define HEX_CHAR_LEN 4

void	ft_put_non_printable_char(char c);
void	ft_put_str_non_printable(char *str);

void	ft_put_str_non_printable(char *str)
{
	while (*str)
	{
		if ((*str >= 32 && *str <= 126))
			write(STDOUT_FILENO, str, 1);
		else
			ft_put_non_printable_char(*str);
		str++;
	}
}

void	ft_put_non_printable_char(char c)
{
	char	*hex_base;
	char	hex_char[4];

	hex_base = "0123456789abcdef";
	hex_char[0] = '\\';
	hex_char[1] = hex_base[c / 16];
	hex_char[2] = hex_base[c % 16];
	hex_char[3] = '\0';
	write(STDOUT_FILENO, hex_char, 4);
}

// int main(void)
// {

// 	put_str_non_printable("Coucou\ntu vas bien ?");
// 	return (0);
// }
