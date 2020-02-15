/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <dnascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 19:03:07 by dnascime          #+#    #+#             */
/*   Updated: 2020/02/15 12:35:07 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*first;

	if (!lst)
		return (NULL);
	if (!(nlist = ft_lstnew(f(lst->content))))
		return (NULL);
	first = nlist;
	while (lst)
	{
		if (lst->next)
		{
			if (!(nlist->next = ft_lstnew(f(lst->next->content))))
			{
				ft_lstclear(&first, del);
				return (0);
			}
			nlist = nlist->next;
		}
		lst = lst->next;
	}
	nlist->next = NULL;
	return (first);
}
