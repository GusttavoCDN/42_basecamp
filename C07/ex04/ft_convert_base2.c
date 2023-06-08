/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:54:34 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/08 13:13:07 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define DECIMAL_BASE "0123456789"
#define DECIMAL_BASE_LEN 10

int	ft_isspace(int c);
int	ft_strlen(char *str);
int	ft_find_digit_on_base(char digit, char *base);
int	ft_isspace(int c);

int	ft_atoi_base(char *str, char *base)
{
	int	number;
	int	signal;
	int	base_len;

	number = 0;
	base_len = ft_strlen(base);
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
