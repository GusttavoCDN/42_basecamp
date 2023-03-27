#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

#define EVEN(num) ((num % 2 == 0) ? 1 : 0)
#define EVEN_MSG "This is a EVEN number"
#define ODD_MSG "This is a ODD number"
#define SUCCESS 0

typedef enum
{
	FALSE = 0,
	TRUE = 1
} t_bool;

#endif
