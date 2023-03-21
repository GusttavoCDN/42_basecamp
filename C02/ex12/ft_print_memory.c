#include <unistd.h>

const char hex_base[17] = "0123456789abcdef";

void ft_print_mem_addr(void *addr);

void ft_form_str_hexa_line(char *src, char *hexa_line);

void ft_putchar(char c);

void ft_print_str_in_hexa(char *str);

void *ft_print_memory(void *addr, unsigned int size)
{
	int i = 0;
	int max_line_size = 16;
	int line_qnts = size / max_line_size;

	if (size == 0) return addr;

	while (i < line_qnts)
	{

		ft_print_mem_addr(addr + (max_line_size * i));
		ft_print_str_in_hexa(addr + (max_line_size * i));
		ft_putchar('\n');
		i++;
	}

	return addr;
}

void ft_print_mem_addr(void *addr)
{
	int i = 0;
	char str_mem[17];
	unsigned long adress = (unsigned long) addr;

	while (adress > 0)
	{
		str_mem[i++] = hex_base[adress % 16];
		adress /= 16;
	}

	str_mem[i] = '\0';
	while (i-- > 0)
		write(STDOUT_FILENO, &str_mem[i], 1);
	write(STDOUT_FILENO, ": ", 2);
}

void ft_print_str_in_hexa(char *str)
{
	char str_hexa_line[33];
	int i = 0;
	int j = 0;
	int max_line_size = 16;

	ft_form_str_hexa_line(str, str_hexa_line);

	while (str_hexa_line[i])
	{
		ft_putchar(str_hexa_line[i++]);
		if (i % 4 == 0)
			ft_putchar(' ');
	}

	while (*str && j < max_line_size)
	{
		if (*str < 32 || *str > 126)
			ft_putchar('.');
		else
			ft_putchar(*str);
		str++;
		j++;
	}
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_form_str_hexa_line(char *src, char *hexa_line)
{
	int i = 0;
	int j = 0;

	while (*src && j < 16)
	{
		unsigned int asc_value = (unsigned int) *src;
		while (asc_value > 9)
		{
			hexa_line[i] = hex_base[(asc_value / 16)];
			asc_value /= 16;
			i++;
		}
		int hex_c = ((unsigned int) *src % 16);
		hexa_line[i] = hex_base[hex_c];
		i++;
		src++;
		j++;
	}

	while (i < 32)
		hexa_line[i++] = ' ';
	hexa_line[i] = '\0';
}
