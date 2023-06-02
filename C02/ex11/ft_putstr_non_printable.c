/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 13:05:04 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/02 12:31:51 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define HEX_BASE "0123456789abcdef"
#define HEX_CHAR_LEN 4

void	ft_put_non_printable_char(char c);
void	put_str_non_printable(char *str);

void	put_str_non_printable(char *str)
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
	char	hex_char[HEX_CHAR_LEN];

	hex_char[0] = '\\';
	hex_char[1] = HEX_BASE[c / 16];
	hex_char[2] = HEX_BASE[c % 16];
	hex_char[3] = '\0';
	write(STDOUT_FILENO, hex_char, HEX_CHAR_LEN);
}

// int main(void)
// {

// 	put_str_non_printable("Coucou\ntu vas bien ?");
// 	return (0);
// }
