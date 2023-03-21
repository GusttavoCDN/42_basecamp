#include <unistd.h>

void ft_putstr(char *str);

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		char *program_name = argv[0];
		ft_putstr(program_name);
	}

	return (0);
}

void ft_putstr(char *str)
{
	while (*str != '\0')
		write(STDOUT_FILENO, str++, 1);
}
