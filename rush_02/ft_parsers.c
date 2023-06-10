/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 12:11:57 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/10 12:53:27 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number_converter.h"

void	ft_read_dict(char *buffer);
void	ft_format_dict(char *buffer);

int	ft_parse_with_default_dict(char *number)
{
	char	buffer[BUFFER_SIZE + 1];
	t_dict	dict[DEFAULT_DICT_SIZE];
	int		nbr_to_convert;

	nbr_to_convert = ft_atoi(number);
	if (nbr_to_convert < 0)
		return (FALSE);
	ft_read_dict(buffer);
	ft_format_dict(buffer);
}

void	ft_read_dict(char *buffer)
{
	int	dict_fd;

	dict_fd = open(DICT_PATH, O_RDONLY);
	read(dict_fd, buffer, BUFFER_SIZE);
	close(dict_fd);
}

void	ft_format_dict(char *buffer)
{
}
