
#ifndef FT_HELPERS_H
# define FT_HELPERS_H

// Standard Library headers
# include <unistd.h>

// Function declarations
/*
* @brief This function converts a string representing a number to an int
* @return The number or 0 if the convertions fails.
*/
int		ft_atoi(char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_isalpha(int c);
size_t	ft_strlen(const char *s);
int		ft_isspace(int c);

#endif // FT_HELPERS_H
