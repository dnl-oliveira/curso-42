/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <dnascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:35:59 by dnascime          #+#    #+#             */
/*   Updated: 2020/01/22 17:11:14 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle,
		size_t len)
{
	size_t	pos;
	size_t	i;

	pos = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[pos] != '\0' && pos < len)
	{
		if (haystack[pos] == needle[0])
		{
			i = 1;
			while (needle[z] != '\0' && haystack[pos + i] == needle[z]
					&& (pos + z) < len)
				i++;
			if (needle[z] == '\0')
			{
				haystack = &haystack[pos];
				return ((char*)haystack);
			}
		}
		pos++;
	}
	return (0);
}
