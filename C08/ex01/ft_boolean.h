/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 23:06:18 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/12 19:19:21 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum e_bool
{
	false = 0,
	true = 1
}	t_bool;

# define EVEN(num) ((num % 2 == 0))
# define EVEN_MSG "This is a EVEN number.\n"
# define ODD_MSG "This is a ODD number.\n"
# define SUCCESS 0
# define FALSE false
# define TRUE true

#endif
