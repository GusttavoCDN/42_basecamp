/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:38:48 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/02 18:15:56 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ex01.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	str_len;

	str_len = ft_strlen(s);
	write(fd, s, str_len);
}
