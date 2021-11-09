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
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	len;

	len = ft_strlen(src) + ft_strlen(dst);
	if (dstsize == 0)
		return (len);
	while (dstsize > 0 && *dst)
	{
		dst++;
		dstsize--;
	}
	while (dstsize > 1 && *src)
	{
		*dst = *src;
		src++;
		dst++;
		dstsize--;
	}
	*dst = '\0';
	return (len);
}
