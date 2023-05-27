/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:16:58 by gusda-si          #+#    #+#             */
/*   Updated: 2023/05/27 13:16:12 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			str++;
		else
			return (0);
	}
	return (1);
}
