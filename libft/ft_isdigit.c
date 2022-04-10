/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvishwac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:14:58 by cvishwac          #+#    #+#             */
/*   Updated: 2022/04/09 14:00:05 by cvishwac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*The isdigit checks if  the passed character is a digit or not. It returns a non-zero value if it’s a digit else it returns 0. For example, it returns a non-zero value for ‘0’ to ‘9’ and zero for others */

int	ft_isdigit(int i)
/*int at the begining of the funtion becuase the decclared function return an int*/
{
	while ('0' <= i && i <= '9')
		return (1);
	return (0);
}
/* while loop = if the given value is a digit reutrns 1 and if it is not a digit returns 0 */
