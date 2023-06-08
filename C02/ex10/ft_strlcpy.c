/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 12:21:05 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/07 23:58:46 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = (unsigned int)ft_strlen(src);
	if (size > 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
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

// int	main(void)
// {
// 	char	buffer[1];

// 	ft_strlcpy(buffer, "Hello", 20);
// 	printf("%s\n", buffer);
// 	return (0);
// }
