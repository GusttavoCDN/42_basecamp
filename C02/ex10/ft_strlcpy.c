char ft_char_to_upper(char c);

char ft_char_to_lower(char c);

char *ft_strcapitalize(char *str)
{
	int i = 0;
	int prev_letter;

	if (*str == '\0') return ((void *) 0);

	while (str[i])
	{

		prev_letter = i - 1;
		if (!(str[prev_letter] >= 'A' && str[prev_letter] <= 'Z') &&
		    !(str[prev_letter] >= '0' && str[prev_letter] <= '9') &&
		    !(str[prev_letter] >= 'a' && str[prev_letter] <= 'z'))
			str[i] = ft_char_to_upper(str[i]);
		else
			str[i] = ft_char_to_lower(str[i]);

		i++;
	}

	return str;
}

char ft_char_to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 32;

	return c;
}

char ft_char_to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return c - 32;

	return c;
}
