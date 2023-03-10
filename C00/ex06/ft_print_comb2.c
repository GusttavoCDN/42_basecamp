#include <unistd.h>

void ft_print_comb2(void);

void ft_put_number(int number);

void ft_put_number(int number)
{
    char decimal = '0' + (number / 10);
    char unit = '0' + (number % 10);

    write(STDOUT_FILENO, &decimal, 1);
    write(STDOUT_FILENO, &unit, 1);
}

void ft_print_comb2(void)
{
    int number = 0;
    int numberTwo = 1;

    while (number <= 98)
    {
        while (numberTwo <= 99)
        {

            ft_put_number(number);
            write(STDOUT_FILENO, &" ", 1);
            ft_put_number(numberTwo);
            if (number == 98 && numberTwo == 99) return;
            write(STDOUT_FILENO, &", ", 2);
            numberTwo++;
        }
        number++;
        numberTwo = number + 1;
    }
}
