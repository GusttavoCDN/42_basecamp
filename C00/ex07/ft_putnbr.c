#include <unistd.h>

void ft_putnbr(int number);

void ft_putchar(char c);

void ft_putnbr(int number)
{
	if (number == -2147483648)
	{
		write(STDOUT_FILENO, "-2147483648", 11);
		return;
	}

	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}

	if (number > 9)
		ft_putnbr(number / 10);

	ft_putchar('0' + (number % 10));
}

void ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
