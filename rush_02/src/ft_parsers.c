/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 12:11:57 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/11 03:03:46 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush02.h"

int	ft_parse_with_default_dict(char *number)
{
	char	buffer[MAX_BUFFER_SIZE + 1];
	t_dict	**dict;
	int		nbr_to_convert;

	nbr_to_convert = ft_atoi(number);
	if (nbr_to_convert < 0)
		return (FALSE);
	ft_read_dict(buffer, DEFAULT_DICT_PATH);
	dict = ft_format_dict(buffer);
	ft_parse_number_to_string(nbr_to_convert, dict);
	return (0);
}

void	ft_parse_number_to_string(int nbr, t_dict **dict)
{
	int	nbr_len;

	nbr_len = ft_calc_nbr_digits(nbr, 10);
	while ((*dict)->key != nbr && *dict != NULL)
		dict++;
	if (nbr_len == 3 && nbr != 100)
		ft_parse_number_to_string(nbr / 100, dict);
	ft_parse_number_to_string(nbr % 100, dict);
	ft_putstr((*dict)->value);
}
