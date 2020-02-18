/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:43:29 by dnascime          #+#    #+#             */
/*   Updated: 2020/02/12 17:56:59 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void    *ft_memcpy(void *dst, const void *src, size_t n);

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   char dest2[50];
   strcpy(dest,"Heloooo!!");
   strcpy(dest2,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   ft_memcpy(dest2, src, strlen(src)+1);
   printf("After ft_memcpy dest = %s\n", dest2);
   return(0);
}
