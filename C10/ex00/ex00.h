/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:36:27 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/30 18:56:51 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_H
# define EX00_H

// Standard Library headers
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

// Constants
# define BUFFER_SIZE 4096

// Function declarations
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

#endif // EX00_H
