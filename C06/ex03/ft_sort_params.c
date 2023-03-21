#include <unistd.h>

void ft_putstr(char *str);

void ft_print_params(char *params[], int size);

int ft_strcmp(char *s1, char *s2);

void ft_sorts_params(char *params[]);

int main(int argc, char *argv[])
{
	if (argc > 0)
		ft_print_params(argv, argc);

	return (0);
}

void ft_print_params(char *params[], int size)
{
	int i = 1;

	ft_sorts_params(params);

	while (i < size)
	{
		ft_putstr(params[i++]);
		ft_putstr("\n");
	}
}

void ft_putstr(char *str)
{
	while (*str != '\0')
		write(STDOUT_FILENO, str++, 1);
}

int ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0' && *s2 != '\0'))
	{
		s1++;
		s2++;
	}

	return ((unsigned int) *s1 - (unsigned int) *s2);
}

void ft_sorts_params(char *params[])
{
	char *temp;
	int i = 1;
	int j;

	while (params[i])
	{
		j = i + 1;
		while (params[j])
		{
			if (ft_strcmp(params[i], params[j]) > 0)
			{
				temp = params[i];
				params[i] = params[j];
				params[j] = temp;
			}
			j++;
		}
		i++;
	}
}
