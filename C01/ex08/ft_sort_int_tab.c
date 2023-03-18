void ft_swap(int *a, int *b);

void ft_sort_int_tab(int *tab, int size)
{
	int i, j;
	int swapped = 0;

	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - 1 - i))
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
				swapped = 1;
			}
			j++;
		}

		if (swapped == 0)
			break;
		i++;
	}
}

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
