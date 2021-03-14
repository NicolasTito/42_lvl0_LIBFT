/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:04:51 by nide-mel          #+#    #+#             */
/*   Updated: 2021/02/20 13:40:20 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*dst;
	unsigned int	total;
	unsigned int	i;

	total = count * size;
	i = 0;
	if (!(dst = malloc(total)))
		return (NULL);
	while (total--)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}
