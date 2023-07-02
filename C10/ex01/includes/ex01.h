/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:27:01 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/02 18:15:57 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_H
# define EX01_H

// Standard Library headers
# include <errno.h>
# include <fcntl.h>
# include <libgen.h> // To use basename function
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
void	ft_cat(int fd);

#endif // EX01_H
