/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:21:58 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/06 00:01:00 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	dest_len;
	int	src_len;

	dest_len = ft_strlen(dest);
	src_len = 0;
	while (src[src_len] != '\0' && nb-- > 0)
		dest[dest_len++] = src[src_len++];
	dest[dest_len] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	return (str_len);
}
