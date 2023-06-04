/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_validator.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 11:13:33 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/04 12:24:31 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INPUT_VALIDATOR_H
# define FT_INPUT_VALIDATOR_H

# define ARG_SIZE 2
# define ERROR_VALIDATION_CODE 2
# define INPUT_EXPECTED_SIZE 31

// Functions

/*
 @brief This functions validates if the input is in the correct format
 @param input The input to validate
 @return TRUE if the input is valid, FALSE otherwise
*/
int	ft_is_input_valid(char *input);

#endif
