/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:36:19 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/06 00:16:37 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_char_to_upper(char c);
char	ft_char_to_lower(char c);
int		ft_is_alphanumeric(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	prev_letter;

	i = 0;
	while (str[i] != '\0')
	{
		prev_letter = i - 1;
		if (i == 0)
			str[i] = ft_char_to_upper(str[i]);
		if (i > 0 && !ft_is_alphanumeric(str[prev_letter])
			&& ft_is_alphanumeric(str[i]))
			str[i] = ft_char_to_upper(str[i]);
		else
			str[i] = ft_char_to_lower(str[i]);
		i++;
	}
	return (str);
}

int	ft_is_alphanumeric(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	ft_char_to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	ft_char_to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int	main(void)
// {
// 	char	str[];

// 	str[] = "hello world! 42this is a test quarante-Deus";
// 	printf("Original: %s\n", str);
// 	ft_strcapitalize(str);
// 	printf("Capitalized: %s\n", str);
// 	return (0);
// }
