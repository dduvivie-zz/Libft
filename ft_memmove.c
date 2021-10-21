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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_last;
	char	*dst_last;

	if ((char *)dst < (char *)src)
	{
		while (len--)
		{
			*(char *)dst = *(char *)src;
			dst++;
			src++;
		}
	}
	else
	{
		src_last = (char *)src + ((int)len - 1);
		dst_last = (char *)dst + ((int)len - 1);
		while (len--)
		{
			*dst_last = *src_last;
			src_last--;
			dst_last--;
		}	
	}
	return (dst);
}
