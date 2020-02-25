/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <dnascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:34:07 by dnascime          #+#    #+#             */
/*   Updated: 2020/02/25 15:42:21 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void		ft_lstdelone(t_hold *elem, t_hold **lst)
{
	t_hold	*last_elem;
	t_hold	*current_elem;

	free(elem->content->line);
	free(elem->content);
	if (*lst == elem)
		*lst = elem->next;
	else
	{
		current_elem = *lst;
		while (current_elem && current_elem != elem)
		{
			last_elem = current_elem;
			current_elem = current_elem->next;
		}
		if (current_elem == elem)
			last_elem->next = elem->next;
	}
	free(elem);
}

t_hold		*ft_get_elem_by_fd(t_hold *lst, int fd)
{
	while (lst)
	{
		if (lst->content->fd == fd)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

int			ft_lstclear(t_hold *lst)
{
	t_hold	*last_elem;

	while (lst)
	{
		free(lst->content->line);
		free(lst->content);
		last_elem = lst;
		lst = lst->next;
		free(last_elem);
	}
	return (-1);
}

t_hold		*ft_lst_add_new(t_hold **lst, int fd)
{
	t_hold	*new_elem;

	if (!(new_elem = malloc(sizeof(t_hold))))
		return (NULL);
	if (!(new_elem->content = malloc(sizeof(t_content))))
		return (NULL);
	if (!(new_elem->content->line = malloc(sizeof(char) * BUFFER_SIZE)))
		return (NULL);
	new_elem->content->fd = fd;
	new_elem->content->line_len = 0;
	new_elem->next = *lst;
	new_elem->content->read_status = BUFFER_SIZE;
	*lst = new_elem;
	return (new_elem);
}

char		*ft_strjoin(char const *s1, char const *s2, size_t s1_len,
		size_t s2_len)
{
	unsigned int	i;
	unsigned int	j;
	char			*out_str;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	if (!(out_str = malloc(sizeof(char) * (s1_len + s2_len))))
		return (NULL);
	while (i < s1_len)
	{
		out_str[i] = s1[i];
		i++;
	}
	while (j < s2_len)
	{
		out_str[i] = s2[j];
		i++;
		j++;
	}
	return (out_str);
}