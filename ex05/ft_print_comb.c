#include <unistd.h>

void ft_print_comb(void);

void add_comma(void);

void write_number(char *number, int len);


void ft_print_comb(void)
{
    char first_number = '0';
    char second_number = '1';
    char third_number = '2';

    while (first_number <= '7')
    {
        while (second_number <= '8')
        {
            while (third_number <= '9')
            {
                char number[] = {first_number, second_number, third_number};
                write_number(number, sizeof(number));
                third_number++;
            }
            second_number++;
            third_number = second_number + 1;
        }
        first_number++;
        second_number = first_number + 1;
        third_number = second_number + 1;
    }
}

void add_comma(void)
{
    write(1, ", ", 2);
}

void write_number(char *number, int len)
{
    write(1, number, len);
    if (number[0] == '7' && number[1] == '8' && number[2] == '9') return;
    add_comma();
}
