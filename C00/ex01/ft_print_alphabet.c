#include <unistd.h>

void ft_print_alphabet(void);

void ft_print_alphabet(void)
{
    for (int i = 97; i <= 122; i++)
    {
        write(1, &i, 1);
    }
}