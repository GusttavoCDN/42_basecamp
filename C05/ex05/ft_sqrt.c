int ft_sqrt(int nb)
{
	int index;

	if (nb <= 0)
		return (0);

	index = 0;
	while (index * index < nb && index <= 46341)
		index++;
	if (index * index == nb)
		return (index);

	return (0);
}
