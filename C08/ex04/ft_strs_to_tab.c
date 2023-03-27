#include "ft_stock_str.h"

int ft_strlen(char *str);

char *ft_strdup(char *src);

t_stock_str ft_create_stock_str(char *str);

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	struct s_stock_str *stock_str_tab = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!stock_str_tab)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		stock_str_tab[i] = ft_create_stock_str(av[i]);
		i++;
	}

	stock_str_tab[i].size = 0;
	stock_str_tab[i].str = NULL;
	stock_str_tab[i].copy = NULL;

	return (stock_str_tab);
}

t_stock_str ft_create_stock_str(char *str)
{
	t_stock_str stock_str;
	int str_len = ft_strlen(str);

	stock_str.size = str_len;
	stock_str.str = str;
	stock_str.copy = ft_strdup(str);

	return (stock_str);
}

int ft_strlen(char *str)
{
	int str_len = 0;

	while (*str != '\0')
	{
		str++;
		str_len++;
	}
	return str_len;
}

char *ft_strdup(char *src)
{
	int i = 0;
	char *new_string = (char *) malloc(ft_strlen(src) + 1);

	if (new_string == NULL)
		return NULL;

	while (src[i])
	{
		new_string[i] = src[i];
		i++;
	}

	new_string[i] = '\0';
	return new_string;
}
