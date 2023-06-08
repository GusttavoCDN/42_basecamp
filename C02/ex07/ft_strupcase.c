/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:31:57 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/07 11:15:15 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str);

char *ft_strupcase(char *str)
{
	char *aux;

	aux = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;

		str++;
	}
	return (aux);
}

int main(void)
{
	char buffer[] = "Gustavo";

	ft_strupcase(buffer);
	return 0;
}
