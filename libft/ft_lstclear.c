/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <dnascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 18:57:33 by dnascime          #+#    #+#             */
/*   Updated: 2020/02/27 17:16:44 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*previous_item;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		previous_item = *lst;
		*lst = previous_item->next;
		free(previous_item);
	}
	*lst = NULL;
}
