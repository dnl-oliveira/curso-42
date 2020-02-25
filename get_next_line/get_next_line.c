/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <dnascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:41:31 by dnascime          #+#    #+#             */
/*   Updated: 2020/02/25 15:45:10 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_get_full_line(t_content *content, char **first_str)
{
	if (!(*first_str = malloc(sizeof(char) * (content->line_len + 1))))
		return (-1);
	(*first_str)[content->line_len] = '\0';
	while (content->line_len)
	{
		content->line_len--;
		(*first_str)[content->line_len] = content->line[content->line_len];
	}
	free(content->line);
	if (!(content->line = malloc(sizeof(char) * BUFFER_SIZE)))
		return (-1);
	return (1);
}

static int		ft_get_first_line(t_content *content, char **first_str, int i)
{
	int		j;
	char	*tmp;
	int		last_line_len;

	j = -1;
	if (!(*first_str = malloc(sizeof(char) * (i + 1))))
		return (-1);
	while (++j < i)
		(*first_str)[j] = content->line[j];
	(*first_str)[j] = '\0';
	if (!(tmp = malloc(sizeof(char) * (content->line_len - j - 1))))
		return (-1);
	last_line_len = content->line_len;
	content->line_len = 0;
	while (++i < last_line_len)
		tmp[content->line_len++] = content->line[i];
	free(content->line);
	content->line = tmp;
	return (1);
}

static int		ft_get_first_str(t_content *content, char **first_str)
{
	unsigned int i;

	*first_str = NULL;
	i = 0;
	while (i < content->line_len && content->line[i] != '\n')
		i++;
	if (i == content->line_len && content->read_status != BUFFER_SIZE &&
			content->line_len != 0)
	{
		if (!(ft_get_full_line(content, first_str)))
			return (-1);
		return (0);
	}
	else if (i < content->line_len)
	{
		if (!(ft_get_first_line(content, first_str, i)))
			return (-1);
	}
	return (1);
}

static int		ft_get_str(t_content *content, char **line)
{
	char	buf[BUFFER_SIZE];
	char	*tmp;
	char	*first_str;
	int		status;

	if ((status = ft_get_first_str(content, &first_str)) == -1)
		return (-1);
	while (!first_str && content->read_status != 0)
	{
		if ((content->read_status = read(content->fd, buf, BUFFER_SIZE)) == -1)
			return (-1);
		if (!(tmp = ft_strjoin(content->line, buf, content->line_len,
						BUFFER_SIZE)))
			return (-1);
		free(content->line);
		content->line = tmp;
		content->line_len += content->read_status;
		if ((status = ft_get_first_str(content, &first_str)) == -1)
			return (-1);
	}
	*line = first_str;
	if (!content->read_status)
		return (0);
	return (status);
}

int				get_next_line(int fd, char **line)
{
	static t_hold	*lst = NULL;
	t_hold			*elem;
	int				status;

	if (fd < 0 || !line)
		return (-1);
	if (!(elem = ft_get_elem_by_fd(lst, fd)))
		if (!(elem = ft_lst_add_new(&lst, fd)))
			return (ft_lstclear(lst));
	if (!((status = ft_get_str(elem->content, line))))
		ft_lstdelone(elem, &lst);
	if (!*line)
	{
		if (!(*line = malloc(sizeof(char) * 1)))
			return (ft_lstclear(lst));
		**line = '\0';
	}
	return (status);
}