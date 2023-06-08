/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:52:15 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/08 13:35:41 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_isspace(int c);
int		ft_strlen(char *str);
int		ft_find_base_errors(char *base);
int		ft_atoi_base(char *str, char *base);
char	*ft_itoa_base(int number, char *base);
int		ft_calc_base_digits(int number, int base_len);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_in_decimal;
	char	*converted_number;

	if (ft_find_base_errors(base_from) || ft_find_base_errors(base_to))
		return (NULL);
	nbr_in_decimal = ft_atoi_base(nbr, base_from);
	converted_number = ft_itoa_base(nbr_in_decimal, base_to);
	return (converted_number);
}

char	*ft_itoa_base(int number, char *base)
{
	char		*number_str;
	int			number_len;
	int			base_len;
	long int	nbr;

	nbr = number;
	base_len = ft_strlen(base);
	number_len = ft_calc_base_digits(number, base_len);
	if (number < 0)
		number_len += 1;
	number_str = (char *)malloc(number_len + sizeof(char));
	if (!number_str)
		return (NULL);
	number_str[number_len] = '\0';
	if (nbr < 0)
	{
		number_str[0] = '-';
		nbr *= -1;
	}
	while (nbr != 0)
	{
		number_str[--number_len] = base[nbr % base_len];
		nbr /= base_len;
	}
	return (number_str);
}

int	ft_calc_base_digits(int number, int base_len)
{
	int	digits;

	digits = 1;
	number /= base_len;
	while (number)
	{
		digits++;
		number /= base_len;
	}
	return (digits);
}

int	ft_find_base_errors(char *base)
{
	int	i;
	int	j;
	int	base_len;

	i = 0;
	base_len = ft_strlen(base);
	if (base_len <= 1)
		return (1);
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

// int	main(void)
// {
// 	char	*conversion;

// 	conversion = ft_convert_base("-10000000000000000000000000000000", "01",
// 			"0123456789ABCDEF");
// 	printf("%s\n", conversion);
// 	free(conversion);
// 	conversion = ft_convert_base("1111111111111111111111111111111", "01",
// 			"0123456789ABCDEF");
// 	printf("%s\n", conversion);
// 	free(conversion);
// 	conversion = ft_convert_base("11111111111111", "01", "0123456789ABCDEF");
// 	printf("%s\n", conversion);
// 	free(conversion);
// 	conversion = ft_convert_base("100111011", "01", "0123456789ABCDEF");
// 	printf("%s\n", conversion);
// 	free(conversion);
// 	conversion = ft_convert_base("-10000000000000000000000000000000", "01",
// 			"0123456789");
// 	printf("%s\n", conversion);
// 	free(conversion);
// }
