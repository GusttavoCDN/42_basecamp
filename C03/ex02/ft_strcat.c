/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:07:59 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/03 19:25:08 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	src_len;

	src_len = 0;
	dest_len = ft_strlen(dest);
	while (src[src_len] != '\0')
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
