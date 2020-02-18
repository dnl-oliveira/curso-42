/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 16:53:51 by dnascime          #+#    #+#             */
/*   Updated: 2020/02/12 17:07:27 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h> 
void    *ft_memset(void *b, int c, size_t len);

int main() 
{ 
    char str[50] = "GeeksForGeeks is for programming geeks."; 
    printf("\nBefore memset(): %s\n", str);
	char str2[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nft_ Before memset(): %s\n", str2);
    // Fill 8 characters starting from str[13] with '.' 
    memset(str + 13, '.', 8*sizeof(char)); 
	memset(str2 + 13, '.', 8*sizeof(char));

    printf("After memset():  %s", str);
    printf("\nft_ After memset():  %s", str2);	
    return 0; 
} 
