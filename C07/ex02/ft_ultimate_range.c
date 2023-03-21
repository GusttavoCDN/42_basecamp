#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		range = NULL;
		return 0;
	}

	if (!range)
		return -1;

	int i = 0;
	int size = (max - min) * sizeof(int);
	*range = (int *) malloc(size);

	while (min < max)
		(*range)[i++] = min++;

	return i;
}
