#include <unistd.h>

void ft_print_numbers(void);

void ft_print_numbers(void)
{
    for (int i = 48; i <= 57; i++)
    {
        write(1, &i, 1);
    }
}
