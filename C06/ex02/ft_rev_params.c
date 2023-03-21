#include <unistd.h>

void ft_putstr(char *str);

void ft_rev_params(char *params[], int size);

int main(int argc, char *argv[])
{
	if (argc > 0)
		ft_rev_params(argv, argc);
	return (0);
}

void ft_rev_params(char *params[], int size)
{
	int i = 1;

	while (i < size)
	{
		ft_putstr(params[--size]);
		ft_putstr("\n");
	}
}

void ft_putstr(char *str)
{
	while (*str != '\0')
		write(STDOUT_FILENO, str++, 1);
}
