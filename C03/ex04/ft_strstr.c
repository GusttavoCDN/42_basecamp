/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:26:08 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/03 19:24:41 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	haystack_p;
	int	needle_p;
	int	found_position;

	if (*to_find == '\0')
		return (str);
	haystack_p = 0;
	while (str[haystack_p] != '\0')
	{
		needle_p = 0;
		if (str[haystack_p] == to_find[needle_p])
		{
			found_position = haystack_p;
			while ((str[haystack_p] == to_find[needle_p])
				&& (to_find[needle_p] != '\0'))
			{
				haystack_p++;
				needle_p++;
			}
		}
		if (to_find[needle_p] == '\0')
			return (&str[found_position]);
		haystack_p++;
	}
	return ((void *)0);
}
