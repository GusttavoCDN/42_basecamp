/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:59:13 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/02 12:32:57 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char first_string[] = "Gustavo";
// 	// char second_string[] = "Gustavo da Silva Amaral";
// 	char buffer[10];

// 	// printf("Original strncpy when buffer is not overflowed => ");
// 	// strncpy(buffer, first_string, 6);
// 	// printf("%s\n", buffer);

// 	printf("Fake ft_strncpy when buffer is not overflowed => ");
// 	ft_strncpy(buffer, first_string, 6);
// 	printf("%s\n", buffer);

// 	// printf("Original strncpy when buffer is overflowed => ");
// 	// strncpy(buffer, second_string, 24);
// 	// printf("%s\n", buffer);

// 	// printf("Fake ft_strncpy when buffer is overflowed => ");
// 	// ft_strncpy(buffer, second_string, 24);
// 	// printf("%s\n", buffer);

// 	return (0);
// }
