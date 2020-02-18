/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:59:28 by dnascime          #+#    #+#             */
/*   Updated: 2020/02/12 18:17:04 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <memory.h>
#include <stdio.h>
#include <string.h>
void    *ft_memccpy(void *dst, const void *src, int c, size_t n);
char string1[60] = "Taj Mahal is a historic monument in India.";

int main( void ) {

   char buffer[61];
   char *pdest;
   printf( "Function: _memccpy 42 characters or to character 'c'\n" );
   printf( "Source: %s\n", string1 );
   pdest = ft_memccpy( buffer, string1, 'c', 42);
   *pdest = '\0';
   printf( "Result: %s\n", buffer );
   //printf( "Length: %d characters\n", strlen(buffer) );
}
