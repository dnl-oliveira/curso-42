/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <dnascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 18:53:15 by dnascime          #+#    #+#             */
/*   Updated: 2020/02/27 17:12:49 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_pos;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	last_pos = ft_lstlast(*lst);
	last_pos->next = new;
}
