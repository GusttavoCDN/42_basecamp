/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:06:41 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/07 01:36:56 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define DECIMAL_BASE "0123456789"
#define DECIMAL_BASE_LEN 10

int	ft_isspace(int c);
int	ft_strlen(char *str);
int	ft_find_digit_on_base(char digit, char *base);
int	ft_find_base_errors(char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	number;
	int	signal;
	int	base_len;

	number = 0;
	base_len = ft_strlen(base);
	if (base_len <= 1 || ft_find_base_errors(base))
		return (number);
	while (ft_isspace(*str))
		str++;
	signal = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	while (ft_find_digit_on_base(*str, base) >= 0)
	{
		number *= base_len;
		number += ft_find_digit_on_base(*str, base);
		str++;
	}
	return (number * signal);
}

int	ft_find_base_errors(char *base)
{
	int	i;
	int	j;
	int	base_len;

	i = 0;
	base_len = ft_strlen(base);
	while (i < base_len)
	{
		if (ft_isspace(base[i]))
			return (1);
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (j < base_len)
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_find_digit_on_base(char digit, char *base)
{
	int	digit_position;
	int	digit_not_found;

	digit_position = 0;
	digit_not_found = -1;
	while (base[digit_position] != '\0')
	{
		if (digit == base[digit_position])
			return (digit_position);
		digit_position++;
	}
	return (digit_not_found);
}

int	ft_strlen(char *str)
{
	char	*pointer;

	pointer = str;
	while (*pointer != '\0')
		pointer++;
	return (pointer - str);
}

int	ft_isspace(int c)
{
	c = (unsigned char)c;
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}

// void	ft_atoi_base_test(char *str, char *base, int expected_number)
// {
// 	int	ft_buff;

// 	ft_buff = ft_atoi_base(str, base);
// 	if (ft_buff != expected_number)
// 		printf("> KO, expected: %d got: %d\n", expected_number, ft_buff);
// 	else
// 		printf("> OK, result: %d\n", ft_buff);
// }

// int	main(void)
// {
// 	// teste com bases binarias
// 	printf("Bases binarias:\n");
// 	ft_atoi_base_test("\n \t\r \v \f++++--1000,.fs", "01", 8);
// 	ft_atoi_base_test("\n \t\r \v \f++++--*/*/**,.fs", "/*", 43);
// 	// teste com bases octais
// 	printf("Bases octais:\n");
// 	ft_atoi_base_test("\n \t\r \v \f++-++--205,.fs", "01234567", -133);
// 	ft_atoi_base_test("\n \t\r \v \f+-+++--fdd,.fs", "abcdefgh", -347);
// 	// teste com bases decimais
// 	printf("Bases decimais:\n");
// 	ft_atoi_base_test("\n \t\r \v \f++-++--2147483648,.fs", "0123456789",
// 			-2147483648);
// 	ft_atoi_base_test("\n \t\r \v \f+-+++-+jjf,.fs", "abcdefghij", 995);
// 	// teste com bases hexadecimais
// 	printf("Bases hexadecimais:\n");
// 	ft_atoi_base_test("\n \t\r \v \f++-+-+--F0FA,.fs", "0123456789ABCDEF",
// 			61690);
// 	ft_atoi_base_test("\n \t\r \v \f+-+++-+ninc,.fs", "abcdefghijklmnop",
// 			55506);
// 	// teste com bases invalidas
// 	printf("Bases invalidas:\n");
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123456678", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\n", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\v", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\t", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\f", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\r", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123 ", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123+", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123-", 0);
// }

// HEX Calc
// https://www.rapidtables.com/convert/number/base-converter.html
