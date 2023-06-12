/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 23:06:18 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/11 23:07:45 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN(num) ((num % 2 == 0) ? 1 : 0)
# define EVEN_MSG "This is a EVEN number"
# define ODD_MSG "This is a ODD number"
# define SUCCESS 0

typedef enum e_bool
{
	FALSE = 0,
	TRUE = 1
}	t_bool;

#endif
