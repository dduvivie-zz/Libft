/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:53:20 by dduvivie          #+#    #+#             */
/*   Updated: 2021/10/21 15:21:05 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_i;
	char	*dst_i;
	int		reverse;

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
