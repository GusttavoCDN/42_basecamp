/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 06:30:04 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/06 11:06:46 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define INT_MIN -2147483648

int		ft_find_base_errors(char *str);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_print(int number, char *base, int base_len);

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (base_len <= 1 || ft_find_base_errors(base))
		return ;
	ft_print(nbr, base, base_len);
}

void	ft_print(int number, char *base, int base_len)
{
	long int	nbr;

	nbr = number;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr < 9)
		return (ft_putchar(base[nbr % base_len]));
	ft_print(nbr / base_len, base, base_len);
	ft_putchar(base[nbr % base_len]);
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
			if (second_char == first_char)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (*str != '\0')
	{
		str++;
		str_len++;
	}
	return (str_len);
}

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

// int	main(void)
// {
// 	ft_putnbr_base(INT_MIN, "0123456789");
// 	ft_putchar('\n');
// 	ft_putnbr_base(INT_MIN, "0123456789ABCDEF");
// 	ft_putchar('\n');
// 	ft_putnbr_base(INT_MIN, "01");
// 	ft_putchar('\n');
// 	ft_putnbr_base(INT_MIN, "poneyvif");
// 	return (0);
// }
