/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:10:43 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/23 22:23:38 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

// Standard Library headers
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0

// Related headers
// # include "libft.h"

// Enum declarations

// Macro declarations

// Struct declarations

typedef struct s_contraints
{
	int	*left;
	int	*right;
	int	*down;
	int	*up;
}		t_contraints;

typedef struct s_coordinates
{
	int	row;
	int	column;
}		t_coordinates;

// Function declarations

int		ft_atoi(const char *str);
int		is_input_valid(int board_size, char *constraints);
int		*create_constraints_array(int len, char *constraints);
size_t	ft_strlen(char *str);
int		**create_board(int board_size);
int	**resolve_board(t_contraints *contraints,
					int **board,
					int board_size);
void	debug_array(int **board, size_t size);

#endif // RUSH01_H
