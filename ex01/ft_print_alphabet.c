#include <unistd.h>

void ft_print_alphabet(void);

void ft_print_alphabet(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvxwyz";

    write(1, alphabet, sizeof alphabet);
}
