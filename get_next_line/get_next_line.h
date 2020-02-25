/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <dnascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:39:41 by dnascime          #+#    #+#             */
/*   Updated: 2020/02/25 15:45:58 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

typedef struct			s_content
{
	char	*line;
	size_t	line_len;
	int		fd;
	int		read_status;
}						t_content;

typedef struct			s_hold
{
	t_content		*content;
	struct s_hold	*next;
}						t_hold;

void					ft_lstdelone(t_hold *elem, t_hold **lst);
int						get_next_line(int fd, char **line);
t_hold					*ft_get_elem_by_fd(t_hold *lst, int fd);
int						ft_lstclear(t_hold *lst);
t_hold					*ft_lst_add_new(t_hold **lst, int fd);
char					*ft_strjoin(char const *s1, char const *s2,
							size_t s1_len, size_t s2_len);
#endif