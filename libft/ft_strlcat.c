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

unsigned int	get_size(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	remaing;
	char			*destiny;
	unsigned int	src_size;

	remaing = size;
	destiny = dest;
	src_size = get_size(src);
	while (remaing-- != 0 && *destiny != '\0')
		destiny++;
	dest_size = destiny - dest;
	remaing = size - dest_size;
	if (remaing == 0)
		return (dest_size + src_size);
	while (*src != '\0')
	{
		if (remaing > 1)
		{
			remaing--;
			*destiny++ = *src;
		}
		src++;
	}
	*destiny = '\0';
	return (dest_size + src_size);
}
