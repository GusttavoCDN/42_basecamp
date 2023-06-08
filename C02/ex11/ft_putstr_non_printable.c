/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 13:05:04 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/07 23:51:26 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define HEX_BASE "0123456789abcdef"
#define HEX_CHAR_LEN 4

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
	char	hex_char[HEX_CHAR_LEN];

	hex_char[0] = '\\';
	hex_char[1] = HEX_BASE[c / 16];
	hex_char[2] = HEX_BASE[c % 16];
	hex_char[3] = '\0';
	write(STDOUT_FILENO, hex_char, HEX_CHAR_LEN);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;

// 	str1 = "Hello, world!";
// 	str2 = "OpenAI\tis\tamazing";
// 	str3 = "Testing\tnewline\ncharacter";
// 	// Test Case 1: Print non-printable characters in str1
// 	printf("Test Case 1: str1: ");
// 	ft_put_str_non_printable(str1);
// 	printf("\n");
// 	// Expected Output: Test Case 1: str1: Hello, world!
// 	// Test Case 2: Print non-printable characters in str2
// 	printf("Test Case 2: str2: ");
// 	ft_put_str_non_printable(str2);
// 	printf("\n");
// 	// Expected Output: Test Case 2: str2: OpenAI\tis\tamazing
// 	// Test Case 3: Print non-printable characters in str3
// 	printf("Test Case 3: str3: ");
// 	ft_put_str_non_printable(str3);
// 	printf("\n");
// 	// Expected Output: Test Case 3: str3: Testing\tnewline\ncharacter
// 	return (0);
// }
