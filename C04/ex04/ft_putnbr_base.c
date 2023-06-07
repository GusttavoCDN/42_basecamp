/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 06:30:04 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/07 01:50:34 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

#define INT_MIN -2147483648

int		ft_find_base_errors(char *str);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_print(int number, char *base, int base_len);
int		ft_isspace(int c);

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
	if (nbr < base_len)
		return (ft_putchar(base[nbr % base_len]));
	ft_print(nbr / base_len, base, base_len);
	ft_putchar(base[nbr % base_len]);
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
		if (base[i] == '\t' || base[i] == '\n' || base[i] == '\v'
			|| base[i] == '\f' || base[i] == '\r' || base[i] == ' ')
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
// 	// base binaria
// 	printf("Bases binarias, n = 47. \"01\" e \"\\/\"\n");
// 	ft_putnbr_base(47, "01");
// 	ft_putchar('\n');
// 	printf("Esperado: 101111\n");
// 	ft_putnbr_base(47, "\\/");
// 	ft_putchar('\n');
// 	printf("Esperado: /\\////\n");
// 	// base 5
// 	printf("Bases 5, n = 36. \"01345\" e \"sd2ek\"\n");
// 	ft_putnbr_base(36, "01345");
// 	ft_putchar('\n');
// 	printf("Esperado: 131\n");
// 	ft_putnbr_base(36, "sd2ek");
// 	ft_putchar('\n');
// 	printf("Esperado: d2d\n");
// 	// base 10
// 	printf("Bases 10, n = %d. \"0123456789\" e \",.;\\][{}@#\"\n", INT_MIN);
// 	ft_putnbr_base(INT_MIN, "0123456789");
// 	ft_putchar('\n');
// 	printf("Esperado: -2147483648\n");
// 	ft_putnbr_base(INT_MIN, ",.;\\][{}@#");
// 	ft_putchar('\n');
// 	printf("Esperado: -;.]}]@\\{]@\n");
// 	// base 16
// 	ft_putnbr_base(-65040, "0123456789ABCDEF");
// 	ft_putchar('\n');
// 	printf("Esperado: -FE10\n");
// 	ft_putnbr_base(-65040, "jdlskmnMKZxVuzfa");
// 	ft_putchar('\n');
// 	printf("Esperado: -afdj\n");
// 	// base 0 e base 1, nao pode aparecer nada
// 	printf("Bases 0 e 1, nao deve aparecer nada, n = 256.\n");
// 	ft_putnbr_base(-29092, "0");
// 	ft_putnbr_base(-29092, "");
// 	return (0);
// }
