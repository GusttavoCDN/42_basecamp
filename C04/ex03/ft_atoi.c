int ft_isspace(int c);

int ft_count_decimals(char *str);

int ft_power(int base, int exponent);

int ft_atoi(char *str)
{
	int signal;
	int number;
	int decimals;

	while (ft_isspace(*str))
		str++;

	signal = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}

	decimals = ft_count_decimals(str);
	number = 0;

	while (*str && (*str >= '0' && *str <= '9'))
	{
		number += (*str - '0') * ft_power(10, --decimals);
		str++;
	}

	return number * signal;
}

int ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' ||
	        c == '\v');
}

int ft_power(int base, int exponent)
{
	int i = 1;
	int result = base;

	if (exponent == 0)
		return 1;

	while (i < exponent)
	{
		result *= base;
		i++;
	}

	return result;
}

int ft_count_decimals(char *str)
{
	int i = 0;

	while (*str && *str >= '0' && *str <= '9')
	{
		i++;
		str++;
	}

	return i;
}
