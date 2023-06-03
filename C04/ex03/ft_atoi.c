/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:07:19 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/03 19:23:14 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c);

int	ft_atoi(char *str)
{
	int	number;
	int	signal;

	while (ft_isspace(*str))
		str++;
	signal = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	number = 0;
	while (*str >= '1' && *str <= '9')
	{
		number *= 10;
		number += *str - '0';
		str++;
	}
	return (number * signal);
}

int	ft_isspace(int c)
{
	if (c >= '\t' && c <= '\r' || c == ' ')
		return (1);
	return (0);
}
