#include "minunit.h"
#include <string.h>
#include <signal.h>

char *ft_strcpy(char *dest, char *src);
void ft_strcpy_should_copy_any_string(char *str);

MU_TEST(it_should_copy_any_string)
{
	ft_strcpy_should_copy_any_string("Gustavo");
	ft_strcpy_should_copy_any_string("Larissa");
	ft_strcpy_should_copy_any_string("");
	ft_strcpy_should_copy_any_string("test");
}

MU_TEST(it_should_retorn_a_pointer_to_the_beggining_of_dest)
{
	char dest_for_fake_strcpy[100];
	char dest_for_original_strcpy[100];
	char *ptr_fake_strcpy;
	char *ptr_original_strcpy;

	ptr_fake_strcpy = ft_strcpy(dest_for_fake_strcpy, "This is my Ninja way!");
	ptr_original_strcpy = strcpy(dest_for_original_strcpy, "This is my Ninja way!");

	printf("\e[1;34mTest if ft_strcpy correctly returns a pointer to the beginning of dest\e[0m => ");
	mu_assert_string_eq(ptr_original_strcpy, ptr_fake_strcpy);
}

MU_TEST_SUITE(ex00)
{
	MU_RUN_TEST(it_should_copy_any_string);
	MU_RUN_TEST(it_should_retorn_a_pointer_to_the_beggining_of_dest);
}

int main(void)
{
	MU_RUN_SUITE(ex00);
	MU_REPORT();
	return MU_EXIT_CODE;
}

void ft_strcpy_should_copy_any_string(char *str)
{
	char dest_for_fake_strcpy[100];
	char dest_for_original_strcpy[100];

	ft_strcpy(dest_for_fake_strcpy, str);
	strcpy(dest_for_original_strcpy, str);

	printf("\e[1;34mTest if ft_strcpy correctly copies the string \e[1;33m'%s'\e[0m => ", str);
	mu_assert_string_eq(dest_for_original_strcpy, dest_for_fake_strcpy);
}
