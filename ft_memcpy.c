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

void	*ft_memcpy(void *dest, const void *src, int n)
{
	char	*str_src;
	char	*str_dest;

	str_src = (char *)src;
	str_dest = (char *)dest;
	while (n != 0)
	{
		*str_dest = *str_src;
		str_src++;
		str_dest++;
		n--;
	}
	return (dest);
}
