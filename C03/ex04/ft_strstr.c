/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:26:08 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/06 00:00:47 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	haystack_p;
	int	needle_p;

	if (*to_find == '\0')
		return (str);
	if (*str == '\0')
		return (0);
	haystack_p = 0;
	while (*(str + haystack_p) != '\0')
	{
		needle_p = 0;
		if (*(str + haystack_p) == *(to_find + needle_p))
		{
			while ((*(str + haystack_p + needle_p) == *(to_find + needle_p))
				&& (*(to_find + needle_p) != '\0'))
				needle_p++;
		}
		if (*(to_find + needle_p) == '\0')
			return ((str + haystack_p));
		haystack_p++;
	}
	return (0);
}
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
