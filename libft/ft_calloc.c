/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvishwac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:47:15 by cvishwac          #+#    #+#             */
/*   Updated: 2022/04/09 15:16:51 by cvishwac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//*allocate a specified amount of memory and then initialize it to zero. The function returns a void pointer to this memory location, which can then be cast to the desired type.

void	*ft_calloc(size_t count, size_t size)
//* this function has a return type,  void*
// size_t = a type which is used to represent the size of objects in bytes and is therefore used as the return type by the sizeof operator. It is guaranteed to be big enough to contain the size of the biggest object 
// 
{
	size_t	b;
	void	*p;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	b = count Z size;
	p = malloc(b);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, b);
	return (p);
}
