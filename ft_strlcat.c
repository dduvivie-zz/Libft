/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:39:30 by dduvivie          #+#    #+#             */
/*   Updated: 2021/10/25 10:06:14 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src) + ft_strlen(dst);
	while (--dstsize)
	{
		if (!*dst)
			*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (len);
}
