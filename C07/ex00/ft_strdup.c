/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:08:08 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/08 13:18:08 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	int		position;
	char	*new_string;

	position = 0;
	new_string = (char *)malloc(ft_strlen(src) + sizeof(char));
	if (new_string == NULL)
		return (NULL);
	while (*(src + position) != '\0')
	{
		*(new_string + position) = *(src + position);
		position++;
	}
	*(new_string + position) = '\0';
	return (new_string);
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
// 	char	*str;
// 	char	*str_copy;

// 	str = "Test string.";
// 	str_copy = ft_strdup(str);
// 	if (strcmp(str, str_copy) != 0)
// 		printf("\033[0;31mKO, string is not the same.\n\033[0m");
// 	else
// 		printf("\033[0;32mOK.\n\033[0m");
// 	str = "";
// 	str_copy = ft_strdup(str);
// 	if (strcmp(str, str_copy) != 0)
// 		printf("\033[0;31mKO, string is not the same.\n\033[0m");
// 	else
// 		printf("\033[0;32mOK.\n\033[0m");
// 	str = "eeeeeeee vida de gado";
// 	str_copy = ft_strdup(str);
// 	if (strcmp(str, str_copy) != 0)
// 		printf("\033[0;31mKO, string is not the same.\n\033[0m");
// 	else
// 		printf("\033[0;32mOK.\n\033[0m");
// 	return (0);
// }
