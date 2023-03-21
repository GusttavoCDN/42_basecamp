#include <stdlib.h>

int ft_strlen(char *str);

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
