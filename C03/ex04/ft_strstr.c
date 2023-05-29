/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:26:08 by gusda-si          #+#    #+#             */
/*   Updated: 2023/05/28 21:21:03 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			while ((str[i] == to_find[i]) && (to_find[i] != '\0'))
				i++;
		}
		if (to_find[i] == '\0')
			return (str[i]);
		str++;
	}
	return ((void *)0);
}
