#include <unistd.h>

void ft_putchar(char c);

void ft_put_non_printable_char(char c);

void ft_putstr_non_printable(char *str)
{

	while (*str)
	{
		if ((*str >= 32 && *str < 127))
			ft_putchar(*str);
		else
			ft_put_non_printable_char(*str);
		str++;
	}
}

void ft_put_non_printable_char(char c)
{
	char hex_base[17] = "0123456789abcdef";
	char hex_char[4];
	int i = 0;

	hex_char[0] = '\\';
	hex_char[1] = hex_base[c / 16];
	hex_char[2] = hex_base[c % 16];
	hex_char[3] = '\0';

	while (hex_char[i])
		ft_putchar(hex_char[i++]);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
