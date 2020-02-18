/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:07:55 by dnascime          #+#    #+#             */
/*   Updated: 2020/02/12 17:43:13 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define MESSG_LNGTH 2000
void    ft_bzero(void *b, size_t n);

int main(int argc, char *argv[])
{
	char buffer[MESSG_LNGTH];
	ft_bzero(buffer, (MESSG_LNGTH));
	printf("I am the child. I received the message: %s.\n", buffer);
	bzero(buffer, (MESSG_LNGTH));
	printf("I am the child. I received the message: %s.\n", buffer);
	return 0;      
}

