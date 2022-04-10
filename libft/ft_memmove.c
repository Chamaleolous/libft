/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvishwac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 22:40:27 by cvishwac          #+#    #+#             */
/*   Updated: 2022/04/01 22:53:35 by cvishwac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	len;

	len = 0;
	if (s2 < s1)
	{
			len = n;
		while (len > 0)
		{
				len--;
				((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
		}
	}
	else
	{				
		len = 0;
		while (len < n)
		{
			((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
				len ++;
		}
	}
	return (s1);
}
