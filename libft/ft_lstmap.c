/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 16:26:41 by nide-mel          #+#    #+#             */
/*   Updated: 2021/02/20 16:29:05 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*list_return;

	list_return = NULL;
	if (lst || f || del)
	{
		while (lst)
		{
			if (!(new = ft_lstnew((*f)(lst->content))))
			{
				while (list_return)
				{
					new = list_return->next;
					(*del)(list_return->content);
					free(list_return);
					list_return = new;
				}
				lst = NULL;
				return (NULL);
			}
			ft_lstadd_back(&list_return, new);
			lst = lst->next;
		}
	}
	return (list_return);
}
