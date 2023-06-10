/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_converter.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 12:03:13 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/10 14:58:54 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Buffer Size => The reason to alloc so many is to ensure
// we can handle large dicts files withou problems.
// Bit calculator => https://pt.calcuworld.com/calculadoras-para-empresas/calculadora-de-bytes/

#ifndef FT_NUMBER_CONVERTER_H
# define FT_NUMBER_CONVERTER_H

# define TRUE 1
# define FALSE 0
# define DEFAULT_DICT_PATH "./numbers.dict"
# define MAX_BUFFER_SIZE 4096
# define DEFAULT_DICT_SIZE 32

// Standard Library headers
# include <fcntl.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

// Related headers
//# include "libft.h"

// Enum declarations

// Macro declarations

// Struct declarations

typedef struct s_dict
{
	int			key;
	const char	*value;
}				t_dict;

// Function declarations

/*
* @brief This functions receives the representation of a number
* and tries to parse it to his string representation using a dict file.
*/
int				ft_parse_with_default_dict(char *number);

/*
* @brief This functions receives the representation of a number
* and a set of dict rules and tries to parse the number to his string
* representation acordingly the dict rules.
*/
int				ft_parse_with_custom_dict(char *number, char *dict);

/*
* @brief This function converts a string representing a number to an int
* @return The number or 0 if the convertions fails.
*/
int				ft_atoi(char *str);

size_t			ft_strlcpy(char *dst, const char *src, size_t size);
#endif // FT_NUMBER_CONVERTER_H