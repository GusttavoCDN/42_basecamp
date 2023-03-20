int ft_strlen(char *str);

char *ft_strcat(char *dest, char *src)
{
	int i;

	i = ft_strlen(dest);

	while (*src != '\0')
		dest[i++] = *src++;

	dest[i] = '\0';

	return dest;
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

