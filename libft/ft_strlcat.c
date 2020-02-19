/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <dnascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:14:56 by dnascime          #+#    #+#             */
/*   Updated: 2020/01/21 20:15:20 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_lenght;
	size_t	src_lenght;

	i = 0;
	dst_lenght = ft_strlen(dst);
	src_lenght = ft_strlen(src);
	if (dstsize <= dst_lenght)
		return (dstsize + src_lenght);
	while (dst[i])
		i++;
	while (*src && i < dstsize - 1)
		dst[i++] = *(src++);
	dst[i] = '\0';
	return (dst_lenght + src_lenght);
}
