/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 06:30:04 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/03 19:22:56 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_find_base_errors(char *str);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int number, char *base, int base_len);

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (base_len <= 1 || ft_find_base_errors(base))
		return ;
	ft_putnbr(nbr, base, base_len);
}

void	ft_putnbr(int number, char *base, int base_len)
{
	int		i;
	char	str_buffer[33];

	i = 0;
	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	while (number > 0)
	{
		str_buffer[i++] = base[number % base_len];
		number /= base_len;
	}
	str_buffer[i--] = '\0';
	while (i >= 0)
		ft_putchar(str_buffer[i--]);
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
