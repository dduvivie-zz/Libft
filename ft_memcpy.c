/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:49:10 by dduvivie          #+#    #+#             */
/*   Updated: 2021/10/18 16:52:57 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Copies n bytes from memory area 'src' to memory area 'dst'.
If 'dst' and 'src' overlap, behavior is undefined.

Return:	the original value of 'dst'.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*dest;

	if (!dst || !src || !n)
		return (dst);
	i = 0;
	dest = (char *)dst;
	while (n--)
	{
		dest[i] = *(char *)src;
		src++;
		i++;
	}
	return (dst);
}
