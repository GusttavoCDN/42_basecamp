/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:39:57 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/01 23:32:30 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*pointer;

	pointer = str;
	while (*pointer != '\0')
		pointer++;
	return (pointer - str);
}
