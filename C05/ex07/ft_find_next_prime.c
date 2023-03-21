int ft_is_prime(int nb);

int ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

int ft_is_prime(int nb)
{
	int index;

	if (nb == 0 || nb == 1)
		return (0);

	index = 2;
	while (index <= nb / 2)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}

	return (1);
}

