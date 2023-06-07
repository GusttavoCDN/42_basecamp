/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:57:11 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/06 23:09:36 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* @brief This functions compares two functions using the ascii table as reference
* @return Returns less than 0 if s1 is less than s2, 0 if they are equal,
* and greater than 0 if s1 is greater than s2
*/
int	ft_strncmp(const char *s1, const char *s2, int n)
{
	while ((*s1 == *s2) && (*s1 != '\0' && *s2 != '\0') && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
