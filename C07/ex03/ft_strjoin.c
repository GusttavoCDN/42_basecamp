/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:55:27 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/08 13:13:15 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_strlen(const char *str);
int				ft_strslen(char **strs, int size);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int		bytes_needed;

	if (size <= 0)
	{
		new_str = (char *)malloc(sizeof(char));
		*new_str = '\0';
		return (new_str);
	}
	if (!strs || !sep)
		return (NULL);
	bytes_needed = ft_strslen(strs, size) + (ft_strlen(sep) * (size - 1));
	new_str = (char *)malloc(bytes_needed + sizeof(char));
	if (!new_str)
		return (NULL);
	while (size > 0)
	{
		ft_strlcat(new_str, *strs++, bytes_needed + sizeof(char));
		ft_strlcat(new_str, sep, bytes_needed + sizeof(char));
		size--;
	}
	return (new_str);
}

int	ft_strslen(char **strs, int size)
{
	int	counter;
	int	chars;

	counter = 0;
	chars = 0;
	while (counter < size)
		chars += ft_strlen(strs[counter++]);
	return (chars);
}

int	ft_strlen(const char *str)
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

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	f_len;

	f_len = ft_strlen(dst) + ft_strlen(src);
	i = ft_strlen(dst);
	j = 0;
	if (size > i)
	{
		while (src[j] && i < size - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
		return (f_len);
	}
	return (ft_strlen(src) + size);
}

// int	main(void)
// {
// 	char	*buf0[6];
// 	char	*ret0;
// 	char	*ret1;
// 	char	*ret2;
// 	char	*ret3;
// 	char	*ret4;
// 	char	*ret5;
// 	char	*ret6;
// 	char	*tru0;
// 	char	*tru1;
// 	char	*tru2;
// 	char	*tru3;

// 	printf("\e[1;31m-- Exercício 03: \e[0m");
// 	buf0[0] = "caminla";
// 	buf0[1] = "eduardo";
// 	buf0[2] = "mauricio";
// 	buf0[3] = "larissa";
// 	buf0[4] = "wagner";
// 	buf0[5] = "gabriel";
// 	ret0 = NULL;
// 	ret1 = NULL;
// 	ret2 = NULL;
// 	ret3 = NULL;
// 	ret4 = NULL;
// 	ret5 = NULL;
// 	ret6 = NULL;
// 	tru0 = "caminla : eduardo : mauricio : larissa : wagner : gabriel";
// 	;
// 	tru1 = "caminla, eduardo";
// 	;
// 	tru2 = "larissa-wagner-gabriel";
// 	;
// 	tru3 = "eduardomauricio";
// 	;
// 	if (strcmp(ret0 = ft_strjoin(6, buf0, " : "), tru0) != 0)
// 		printf("KO, test00\n");
// 	else if (strcmp(ret1 = ft_strjoin(2, buf0, ", "), tru1) != 0)
// 		printf("KO, test01\n");
// 	else if (strcmp(ret2 = ft_strjoin(3, buf0 + 3, "-"), tru2) != 0)
// 		printf("KO, test02\n");
// 	else if (strcmp(ret3 = ft_strjoin(2, buf0 + 1, ""), tru3) != 0)
// 		printf("KO, test03\n");
// 	else if (strcmp(ret4 = ft_strjoin(0, buf0, "0"), "") != 0)
// 		printf("KO, test04\n");
// 	else if (strcmp(ret5 = ft_strjoin(2, buf0 + 2, "0"),
// 					"mauricio0larissa") != 0)
// 		printf("KO, test05\n");
// 	else if (strcmp(ret6 = ft_strjoin(-3, buf0 + 2, "0"), "") != 0)
// 		printf("KO, test06\n");
// 	else
// 		printf("OK\n");
// 	free(ret0);
// 	free(ret1);
// 	free(ret2);
// 	free(ret3);
// 	free(ret4);
// 	free(ret5);
// 	free(ret6);
// }
