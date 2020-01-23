/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <dnascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 19:18:53 by dnascime          #+#    #+#             */
/*   Updated: 2020/01/22 17:52:32 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

int				ft_isprint(int n);
int				ft_isdigit(int n);
int				ft_isascii(int n);
int				ft_isalpha(int n);
int				ft_isalnum(int n);
int				ft_tolower(int n);
int				ft_toupper(int n);

int				ft_strlen(char *str);
int				ft_atoi(const char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

char			*ft_strnstr(const char *str, const char *to_find, size_t len);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);

void			ft_putchar(char c);
void			ft_bzero(void *b, size_t n);

#endif
