
#ifndef EX03_H
# define EX03_H

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

# define BUFFER_SIZE 16
# define NULL_BYTE 1

// Related headers
//# include "libft.h"

// Enum declarations

// Macro declarations

// Struct declarations

// Function declarations

void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
int		ft_hexdump(int fd);

#endif // EX03_H
