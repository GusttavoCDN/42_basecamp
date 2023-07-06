
#ifndef EX02_H
# define EX02_H

// Standard Library headers

# include <ctype.h>
# include <errno.h>
# include <fcntl.h>
# include <libgen.h> // To use basename function
# include <stdio.h>
# include <stdlib.h>
# include <string.h> // To use strerror function
# include <unistd.h>

// Constants

# define BUFFER_SIZE 29000
# define NULL_BYTE 1

// Related headers
//# include "libft.h"

// Enum declarations

// Macro declarations

// Struct declarations

// Function declarations

void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
void	ft_tail(int fd, char *filepath, char *flag, int flag_value);

#endif // EX02_H
