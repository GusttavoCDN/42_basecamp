/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:26:08 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/08 19:19:35 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(const char *s1, const char *s2, int n);
int		ft_strlen(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int	to_find_len;

	if (*to_find == '\0')
		return (str);
	if (*str == '\0')
		return (0);
	to_find_len = ft_strlen(to_find);
	while (*str != '\0')
	{
		if (ft_strncmp(str, to_find, to_find_len) == 0)
			return (str);
		str++;
	}
	return (0);
}

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

int	ft_strlen(char *str)
{
	char	*pointer;

	pointer = str;
	while (*pointer != '\0')
		pointer++;
	return (pointer - str);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str1;
// 	char	*result1;
// 	char	*result2;
// 	char	*str2;
// 	char	*str3;
// 	char	*str4;
// 	char	*str5;

// 	str1 = "Hello, world!";
// 	str2 = "I love programming";
// 	str3 = "OpenAI is amazing";
// 	str4 = "Hello, world!";
// 	str5 = "";
// 	result1 = ft_strstr(str1, "world");
// 	result2 = strstr(str1, "world");
// 	printf("Test Case 1: Result: %s | Expected: %s | Match: %s\n", result1,
// 			result2, (result1 == result2 ? "Yes" : "No"));
// 	result1 = ft_strstr(str2, "programming");
// 	result2 = strstr(str2, "programming");
// 	printf("Test Case 2: Result: %s | Expected: %s | Match: %s\n", result1,
// 			result2, (result1 == result2 ? "Yes" : "No"));
// 	result1 = ft_strstr(str3, "amazing");
// 	result2 = strstr(str3, "amazing");
// 	printf("Test Case 3: Result: %s | Expected: %s | Match: %s\n", result1,
// 			result2, (result1 == result2 ? "Yes" : "No"));
// 	result1 = ft_strstr(str4, "Hello");
// 	result2 = strstr(str4, "Hello");
// 	printf("Test Case 4: Result: %s | Expected: %s | Match: %s\n", result1,
// 			result2, (result1 == result2 ? "Yes" : "No"));
// 	result1 = ft_strstr(str5, "");
// 	result2 = strstr(str5, "");
// 	printf("Test Case 5: Result: %s | Expected: %s | Match: %s\n", result1,
// 			result2, (result1 == result2 ? "Yes" : "No"));
// 	return (0);
// }
