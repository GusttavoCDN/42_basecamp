/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_helpers.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 11:49:07 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/04 11:49:12 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_HELPERS_H
# define FT_STRING_HELPERS_H

// Function declarations

/**
 * @brief Print a string on the STDOUT => Terminal
 * @param str The string to print
*/
void	ft_putstr(char *str);

/**
 * @brief Return the length of a string
 * @param str The string
*/
int		ft_strlen(char *str);

#endif // FT_STRING_HELPERS_H
