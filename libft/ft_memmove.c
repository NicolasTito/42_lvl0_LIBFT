/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:30:56 by nide-mel          #+#    #+#             */
/*   Updated: 2021/02/20 12:35:24 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *str, size_t n)
{
	if (!dest || !str)
		return (NULL);
	if (dest > str)
	{
		while (n--)
			*(char*)(dest + n) = *(char*)(str + n);
	}
	else if (str > dest)
	{
		ft_memcpy(dest, str, n);
	}
	return (dest);
}
