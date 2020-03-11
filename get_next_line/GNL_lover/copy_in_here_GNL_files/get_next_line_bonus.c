/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 17:27:45 by lsenra-a          #+#    #+#             */
/*   Updated: 2020/03/11 16:26:29 by lsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static void	updt_n_clr(char **orig, char *updt)
{
	char	*temp;

	temp = *orig;
	*orig = updt;
	if (temp)
		free(temp);
}

int			get_next_line(int fd, char **line)
{
	static char		*left[OPEN_MAX];
	char			*buffer;
	int				line_len;
	int				nread;

	if (!line || fd < 0 || fd >= OPEN_MAX || BUFFER_SIZE < 1)
		return (-1);
	line_len = ft_has_eol(left[fd]);
	nread = 1;
	while (line_len < 0 && nread)
	{
		if (!(buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1)))
				|| (nread = read(fd, buffer, BUFFER_SIZE)) == -1)
			return (-1);
		buffer[nread] = '\0';
		updt_n_clr(&(left[fd]), ft_strjoin(left[fd], buffer));
		free(buffer);
		line_len = (nread) ? ft_has_eol(left[fd]) : ft_strlen(left[fd]);
	}
	*line = ft_substr(left[fd], 0, line_len);
	updt_n_clr(&(left[fd]), ft_substr(left[fd], line_len + 1,
				ft_strlen(left[fd])));
	if (!nread)
		return (0);
	return (1);
}
