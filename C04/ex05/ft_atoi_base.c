/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:06:41 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/03 23:45:03 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int		i;
	int		j;
	int		base_len;
	char	first_char;
	char	second_char;

	i = 0;
	base_len = ft_strlen(base);
	while (i < base_len)
	{
		first_char = base[i];
		if (first_char == '+' || first_char == '-')
			return (1);
		j = i + 1;
		while (j < base_len)
		{
			second_char = base[j];
			if (base[j] == first_char)
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
	if (c >= '\t' && c <= '\r' || c == ' ')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	test1;
// 	int	test2;
// 	int	test3;
// 	int	test4;
// 	int	test5;

// 	test1 = ft_atoi_base("---1FFZCF", "0123456789ABCDEF");
// 	test2 = ft_atoi_base("01010101", "01");
// 	test3 = ft_atoi_base("01010101", "111");
// 	test4 = ft_atoi_base("01010101", "111");
// 	test5 = ft_atoi_base("0231342", "01234567");
// 	return (0);
// }

// HEX Calc
// https://www.rapidtables.com/convert/number/base-converter.html
