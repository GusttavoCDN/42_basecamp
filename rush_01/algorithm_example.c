#include <stdio.h>

/* void ft_altera_restantes(int array[][6])
   {




   }
    */

void	alterar_valores(int array[][6])
{
	int	j;

	int i = 0; //linha
	j = 1;
	while (j <= 4)
	{
		if (array[i][j] == 1)
		{
			// Altere os valores em outras posições conforme necessário
			array[i + 1][j] = 4;
		}
		if (array[i][j] == 4)
		{
			// Altere os valores em outras posições conforme necessário
			array[i + 1][j] = 1;
			array[i + 2][j] = 2;
			array[i + 3][j] = 3;
			array[i + 4][j] = 4;
		}
		if (array[i][j] == 3)
		{
			// Altere os valores em outras posições conforme necessário
			if (array[i + 1][j] != 1 && array[i + 1][j] != 2 && array[i
				+ 1][j] != 3 && array[i + 1][j] != 4)
			{
				array[i + 1][j] = 12;
			}
		}
		if (array[i][j] == 2)
		{
			if (array[i + 1][j] != 1 && array[i + 1][j] != 2 && array[i
				+ 1][j] != 3 && array[i + 1][j] != 4)
			{
				array[i + 1][j] = 123;
			}
		}
		j++;
	}
	i = 1; //linha
	j = 5;
	while (i <= 4)
	{
		if (array[i][j] == 1)
		{
			// Altere os valores em outras posições conforme necessário
			array[i][j - 1] = 4;
		}
		if (array[i][j] == 4)
		{
			// Altere os valores em outras posições conforme necessário
			array[i][j - 1] = 1;
			array[i][j - 2] = 2;
			array[i][j - 3] = 3;
			array[i][j - 4] = 4;
		}
		if (array[i][j] == 3)
		{
			if (array[i][j - 1] != 1 && array[i][j - 1] != 2 && array[i][j
				- 1] != 3 && array[i][j - 1] != 4)
			{
				array[i][j - 1] = 12;
			}
		}
		if (array[i][j] == 2)
		{
			if (array[i][j - 1] != 1 && array[i][j - 1] != 2 && array[i][j
				- 1] != 3 && array[i][j - 1] != 4)
			{
				array[i][j - 1] = 123;
			}
		}
		i++;
	}
	i = 5; //linha
	j = 1;
	while (j <= 4)
	{
		if (array[i][j] == 1)
		{
			// Altere os valores em outras posições conforme necessário
			array[i - 1][j] = 4;
		}
		if (array[i][j] == 4)
		{
			// Altere os valores em outras posições conforme necessário
			array[i - 1][j] = 1;
			array[i - 2][j] = 2;
			array[i - 3][j] = 3;
			array[i - 4][j] = 4;
		}
		if (array[i][j] == 3)
		{
			if (array[i - 1][j] != 1 && array[i - 1][j] != 2 && array[i
				- 1][j] != 3 && array[i - 1][j] != 4)
			{
				array[i - 1][j] = 12;
			}
		}
		if (array[i][j] == 2)
		{
			if (array[i - 1][j] != 1 && array[i - 1][j] != 2 && array[i
				- 1][j] != 3 && array[i - 1][j] != 4)
			{
				array[i - 1][j] = 123;
			}
		}
		j++;
	}
	i = 1; //linha
	j = 0;
	while (i <= 4)
	{
		if (array[i][j] == 1)
		{
			// Altere os valores em outras posições conforme necessário
			array[i][j + 1] = 4;
		}
		if (array[i][j] == 4)
		{
			// Altere os valores em outras posições conforme necessário
			array[i][j + 1] = 1;
			array[i][j + 2] = 2;
			array[i][j + 3] = 3;
			array[i][j + 4] = 4;
		}
		if (array[i][j] == 3)
		{
			if (array[i][j + 1] != 1 && array[i][j + 1] != 2 && array[i][j
				+ 1] != 3 && array[i][j + 1] != 4)
			{
				array[i][j + 1] = 12;
			}
		}
		if (array[i][j] == 2)
		{
			if (array[i][j + 1] != 1 && array[i][j + 1] != 2 && array[i][j
				+ 1] != 3 && array[i][j + 1] != 4)
			{
				array[i][j + 1] = 123;
			}
		}
		i++;
	}
	//     ft_altera_restantes();
}

int	main(void)
{
	int	i;
	int	j;

	int array[6][6] = {
		{0, 0004, 0003, 0002, 0001, 0},
		{4, 1234, 1234, 1234, 1234, 1},
		{3, 1234, 1234, 1234, 1234, 2},
		{2, 1234, 1234, 1234, 1234, 2},
		{1, 1234, 1234, 1234, 1234, 2},
		{0, 0001, 0002, 0002, 0002, 0}};
	alterar_valores(array);
	// Exibir a matriz modificada
	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			printf("%d ", array[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
