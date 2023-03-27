#include <stdlib.h>

int ft_strlen(const char *str);

int ft_count_words(char **words);

unsigned int ft_strlcat(char *dst, const char *src, unsigned int size);

char *ft_strjoin(int size, char **strs, char *sep)
{
	int sep_len = ft_strlen(sep);
	int words_qnt = ft_count_words(strs);
	int sep_size = (sep_len * words_qnt) - sep_len;
	int new_str_size = (size + sep_size + 1);
	char *new_str = malloc(new_str_size * sizeof(char));
	int i = 0;

	while (i < words_qnt)
	{
		ft_strlcat(new_str, strs[i], new_str_size);
		if (i < words_qnt - 1)
			ft_strlcat(new_str, sep, new_str_size);
		i++;
	}

	return (new_str);
}

int ft_strlen(const char *str)
{
	int str_len = 0;

	while (*str != '\0')
	{
		str++;
		str_len++;
	}

	return str_len;
}

int ft_count_words(char **words)
{
	int i = 0;

	while (words[i] != NULL)
		i++;

	return i;
}

unsigned int ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int f_len;

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
