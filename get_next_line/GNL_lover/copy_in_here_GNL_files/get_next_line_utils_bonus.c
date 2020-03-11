/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:15:04 by lsenra-a          #+#    #+#             */
/*   Updated: 2020/03/11 16:25:21 by lsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	n;

	n = 0;
	if (!str)
		return (0);
	while (*(str + n))
		n++;
	return (n);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*joined;
	size_t	i;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined = (char *)malloc(size * sizeof(char));
	if (joined)
	{
		i = 0;
		if (s1)
			while (*s1)
				joined[i++] = *(s1++);
		if (s2)
			while (*s2)
				joined[i++] = *(s2++);
		joined[size - 1] = '\0';
	}
	return (joined);
}

int		ft_has_eol(char *str)
{
	int	i;

	if (!str)
		return (-1);
	i = 0;
	while (*(str + i) && *(str + i) != '\n')
		i++;
	if (*(str + i) == '\n')
		return (i);
	return (-1);
}

char	*ft_substr(char *str, size_t start, size_t end)
{
	char	*sub;
	size_t	i;

	if (end < start || !str || start < 0)
		return (NULL);
	sub = (char *)malloc(((end - start) + 1) * sizeof(char));
	str += start;
	if (sub)
	{
		i = 0;
		sub[end - start] = '\0';
		while (i < end - start && *str)
			sub[i++] = *str++;
	}
	return (sub);
}
