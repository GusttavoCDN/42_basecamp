/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:57:11 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/06 00:01:04 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* @brief This functions compares two functions using the ascii table as reference
* @return Returns less than 0 if s1 is less than s2, 0 if they are equal,
* and greater than 0 if s1 is greater than s2
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0') && i < n)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
