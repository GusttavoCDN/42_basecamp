char *ft_strstr(char *str, char *to_find)
{
	int i;

	if (*to_find == '\0')
		return str;

	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			while ((str[i] == to_find[i]) && (to_find[i] != '\0'))
				i++;
		}

		if (to_find[i] == '\0')
			return str;
		str++;
	}

	return ((void *) 0);
}
