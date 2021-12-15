/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:10:54 by btenzlin          #+#    #+#             */
/*   Updated: 2021/07/28 12:53:29 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*element;

	if (!f || !lst)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (new_lst == 0)
		return (NULL);
	element = new_lst;
	lst = lst->next;
	while (lst != 0)
	{
		element->next = ft_lstnew(f(lst->content));
		if (element == 0)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		element = element->next;
		lst = lst->next;
	}
	return (new_lst);
}
