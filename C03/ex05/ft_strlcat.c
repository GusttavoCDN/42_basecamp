/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:15:57 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/06 00:00:53 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(const char *str);

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
		while (src[j] != '\0' && i < size - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
		return (f_len);
	}
	return (ft_strlen(src) + size);
}

int	ft_strlen(const char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	return (str_len);
}

// int main(void)
// {
// 	char dst[20] = "Hello";
// 	const char *src = "world!";
// 	unsigned int result;

// 	// Test Case 1: Concatenate "world!" to "Hello" with size 20
// 	result = ft_strlcat(dst, src, 20);
// 	printf("Test Case 1: Result: %s | Length: %u\n", dst, result);
// 	// Expected Output: Result: Hello world! | Length: 12

// 	char dst2[6] = "Hello";
// 	const char *src2 = "world!";

// 	// Test Case 2: Concatenate "world!" to "Hello" with size 5
// 	result = ft_strlcat(dst2, src2, 3);
// 	printf("Test Case 2: Result: %s | Length: %u\n", dst2, result);
// 	// Expected Output: Result: Hello | Length: 11

// 	return (0);
// }
