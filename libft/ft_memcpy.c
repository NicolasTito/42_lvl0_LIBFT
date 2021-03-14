/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:47:57 by nide-mel          #+#    #+#             */
/*   Updated: 2021/02/20 12:28:38 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *str, size_t n)
{
	size_t		i;

	i = 0;
	if (!dest)
		return (NULL);
	while (i < n)
	{
		*(char*)(dest + i) = *(char*)(str + i);
		i++;
	}
	return (dest);
}
