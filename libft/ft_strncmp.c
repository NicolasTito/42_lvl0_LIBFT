/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 20:15:07 by nide-mel          #+#    #+#             */
/*   Updated: 2021/02/20 12:40:09 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int		i;
	size_t	len;

	i = 0;
	len = n;
	if (n == 0)
		return (0);
	while (str1[i] != '\0' && str2[i] != '\0' && len - 1 > 0)
	{
		if (str1[i] == str2[i])
		{
			i++;
			len--;
		}
		else
			break ;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
