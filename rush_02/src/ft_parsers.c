/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 12:11:57 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/11 02:18:23 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush02.h"

int	ft_parse_with_default_dict(char *number)
{
	char	buffer[MAX_BUFFER_SIZE + 1];
	t_dict	*dict;
	int		nbr_to_convert;

	nbr_to_convert = ft_atoi(number);
	if (nbr_to_convert < 0)
		return (FALSE);
	ft_read_dict(buffer, DEFAULT_DICT_PATH);
	ft_format_dict(buffer);
}
