/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 09:02:14 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/02 12:33:29 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include <signal.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
void	ft_strcpy_should_act_like_strcnpy(char *str, int n);

MU_TEST(it_should_copy_any_string)
{
	ft_strcpy_should_act_like_strcnpy("Gustavo", 6);
	// ft_strcpy_should_act_like_strcnpy("Larissa", 7);
	// ft_strcpy_should_act_like_strcnpy("", 1);
	// ft_strcpy_should_act_like_strcnpy("test", 4);
}

// MU_TEST(it_should_retorn_a_pointer_to_the_beggining_of_dest)
// {
// 	char dest_for_fake_strcpy[100];
// 	char dest_for_original_strcpy[100];
// 	char *ptr_fake_strcpy;
// 	char *ptr_original_strcpy;

// 	ptr_fake_strcpy = ft_strcpy(dest_for_fake_strcpy, "This is my Ninja way!");
// 	ptr_original_strcpy = strcpy(dest_for_original_strcpy,
// 									"This is my Ninja way!");
// 	printf("\e[1;34mTest if ft_strcpy correctly returns a pointer to the beginning of dest\e[0m => ");
// 	mu_assert_string_eq(ptr_original_strcpy, ptr_fake_strcpy);
// }

MU_TEST_SUITE(ex01)
{
	MU_RUN_TEST(it_should_copy_any_string);
	// MU_RUN_TEST(it_should_retorn_a_pointer_to_the_beggining_of_dest);
}

int	main(void)
{
	MU_RUN_SUITE(ex01);
	MU_REPORT();
	return (MU_EXIT_CODE);
}

void	ft_strcpy_should_act_like_strcnpy(char *str, int n)
{
	char	dest_for_fake_strncpy[10];
	char	dest_for_original_strncpy[10];

	ft_strncpy(dest_for_fake_strncpy, str, n);
	strncpy(dest_for_original_strncpy, str, n);
	printf("\e[1;34mft_strncpy should Copy to
			%d bytes of string \e[1;33m'%s' to buffer\e[0m => ",
			n,
			str);
	mu_assert_string_eq(dest_for_original_strncpy, dest_for_fake_strncpy);
}
