/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 12:21:05 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/02 12:32:12 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	src_len;

	i = 0;
	src_len = ft_strlen(src);
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (*str != '\0')
	{
		str++;
		str_len++;
	}
	return (str_len);
}
