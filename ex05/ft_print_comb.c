#include <unistd.h>

void ft_print_comb(void);

void add_comma(void);

void write_number(char *number, int len);


void ft_print_comb(void)
{
    int first_number;
    int second_number;
    int third_number;

    first_number = 0;
    while (first_number <= 9)
    {
        second_number = first_number + 1;
        while (second_number <= 9)
        {
            third_number = second_number + 1;
            while (third_number <= 9)
            {
                char number[] = {('0' + first_number), ('0' + second_number),
                                 ('0' + third_number)};
                write_number(number, sizeof(number));
                third_number++;
            }
            second_number++;
        }
        first_number++;
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
