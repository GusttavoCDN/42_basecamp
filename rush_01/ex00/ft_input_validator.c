/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_validator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 11:13:28 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/04 16:38:11 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/rush01.h"

#define DIGITS_EXPECTED_QUANTITY 16

static int	ft_isspace(int c);
static int	ft_is_valid_num(int c);
static int	ft_input_content_is_valid(char *input);
static int	ft_is_number_on_correct_position(int position, int number);

int	ft_is_input_valid(char *input)
{
	unsigned int	input_len;

	input_len = ft_strlen(input);
	if (input_len != INPUT_EXPECTED_SIZE)
		return (FALSE);
	if (!ft_input_content_is_valid(input))
		return (FALSE);
	return (TRUE);
}

static int	ft_input_content_is_valid(char *input)
{
	int	digits_quantity;
	int	position;

	position = 0;
	digits_quantity = 0;
	while (input[position] != '\0')
	{
		if (ft_is_number_on_correct_position(position, input[position]))
		{
			digits_quantity++;
			position++;
			continue ;
		}
		if (!ft_isspace(input[position]))
			return (FALSE);
		position++;
	}
	return (digits_quantity == DIGITS_EXPECTED_QUANTITY);
}

static int	ft_is_number_on_correct_position(int position, int number)
{
	if (ft_is_valid_num(number) && position % 2 == 0)
		return (TRUE);
	return (FALSE);
}

static int	ft_is_valid_num(int c)
{
	return (c >= '1' && c <= '4');
}

static int	ft_isspace(int c)
{
	if ((c >= '\t' && c <= '\r') || (c == ' '))
		return (TRUE);
	return (FALSE);
}
