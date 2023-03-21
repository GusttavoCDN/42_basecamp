#include <stdlib.h>

int *ft_range(int min, int max)
{
	if (min >= max)
		return NULL;

	int i = 0;
	int size = (max - min) * sizeof(int);
	int *range = (int *) malloc(size);

	while (min < max)
		range[i++] = min++;
	return range;
}
