/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 15:44:58 by nide-mel          #+#    #+#             */
/*   Updated: 2021/02/20 16:37:56 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_back(t_list **lst, t_list *ftnew)
{
	if (lst)
	{
		if (*lst)
			ft_lstlast(*lst)->next = ftnew;
		else
			*lst = ftnew;
	}
}
