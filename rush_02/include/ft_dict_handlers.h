/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_handlers.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 01:35:07 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/11 02:27:05 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_HANDLERS_H
# define FT_DICT_HANDLERS_H

// Struct declarations

typedef struct s_dict
{
	int			key;
	const char	*value;
}				t_dict;

// Function declarations

t_dict			**ft_format_dict(char *buffer);
void			ft_read_dict(char *buffer, char *dict_path);
int				ft_count_lines(char *buffer);
int				ft_line_len(char *line);
char			*ft_trim_line(char *line);
char			*ft_get_line_content(char *line, size_t line_len);

#endif // FT_DICT_HANDLERS_H
