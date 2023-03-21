int ft_iterative_factorial(int nb)
{
	int result = 1;
	int i = 1;

	if (nb < 0)
		return 0;

	while (i <= nb)
	{
		result *= i;
		i++;
	}

	return result;
}
