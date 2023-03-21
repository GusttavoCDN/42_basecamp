int ft_strlen(char *str);

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i = 0;
	int src_len = ft_strlen(src);

	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return src_len;
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
