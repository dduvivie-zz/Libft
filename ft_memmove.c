/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:53:20 by dduvivie          #+#    #+#             */
/*   Updated: 2021/11/18 13:36:13 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Copies 'len' bytes from string 'src' to string 'dst'.
If 'reverse' is 1, it starts the copy from the last character
to the first character.
*/
static char	*str_cpy(char *dst, char *src, int reverse, size_t len)
{
	while (len--)
	{
		*dst = *src;
		if (reverse)
		{
			src--;
			dst--;
		}
		else
		{
			src++;
			dst++;
		}
	}
	return (dst);
}

/*
Copies 'len' bytes from string 'src' to string 'dst'.
The two strings may overlap; the copy is always done in a non-destructive manner.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_i;
	char	*dst_i;
	int		reverse;

	if (!dst && !src)
		return (0);
	if ((char *)dst < (char *)src)
	{
		src_i = (char *)src;
		dst_i = (char *)dst;
		reverse = 0;
	}
	else
	{
		src_i = (char *)src + ((int)len - 1);
		dst_i = (char *)dst + ((int)len - 1);
		reverse = 1;
	}
	str_cpy(dst_i, src_i, reverse, len);
	return (dst);
}
