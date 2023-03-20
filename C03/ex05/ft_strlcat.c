int ft_strlen(const char *str);

unsigned int ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int f_len;

	f_len = ft_strlen(dst) + ft_strlen(src);
	i = ft_strlen(dst);
	j = 0;

	if (size > i)
	{
		while (src[j] && i < size - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
		return (f_len);
	}

	return (ft_strlen(src) + size);
}

int ft_strlen(const char *str)
{
	int str_len = 0;

	while (*str != '\0')
	{
		str++;
		str_len++;
	}

	return str_len;
}

