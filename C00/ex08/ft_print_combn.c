/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:27:17 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/01 03:40:56 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char *numbers, int size, char *max_number);
void	ft_update_digits(char *numbers, int size, const char *max_number);

void	ft_print_combn(int n)
{
	char	numbers[10];
	char	max_number[10];
	int		i;

	if (n <= 0 || n > 10)
	{
		write(STDOUT_FILENO, "Insert an number between 0 and 10\n", 35);
		return ;
	}
	i = 0;
	while (i < n)
	{
		numbers[i] = (char)(i + '0');
		max_number[i] = (char)((10 - n) + i + '0');
		i++;
	}
	ft_print_numbers(numbers, n, max_number);
}
void	ft_print_numbers(char *numbers, int size, char *max_number)
{
	int final_position;

	final_position = size - 1;
	while (numbers[0] != max_number[0])
	{
		write(STDOUT_FILENO, numbers, size);
		write(STDERR_FILENO, ", ", 2);
		if (numbers[final_position] + 1 <= '9')
			numbers[final_position]++;
		if (numbers[final_position] == max_number[final_position] && size > 1)
		{
			write(STDERR_FILENO, numbers, size);
			write(STDERR_FILENO, ", ", 2);
			ft_update_digits(numbers, size, max_number);
		}
	}
	write(STDOUT_FILENO, numbers, size);
}

void	ft_update_digits(char *numbers, int size, const char *max_number)
{
	int	digit_to_update;

	digit_to_update = size - 1;
	while (numbers[digit_to_update] == max_number[digit_to_update])
		digit_to_update--;
	numbers[digit_to_update] =(char) (numbers[digit_to_update] + 1);
	while (++digit_to_update < size)
		numbers[digit_to_update] = (char)(numbers[digit_to_update - 1] + 1);
}
