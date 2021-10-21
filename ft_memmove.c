/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:53:20 by dduvivie          #+#    #+#             */
/*   Updated: 2021/10/18 16:53:21 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str_temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i != n)
	{
		str_temp[i] = *(char *)src;
		i++;
		src++;
	}
	while (j != n)
	{
		*(char *)dest = str_temp[j];
		j++;
		dest++;
	}
	return (dest);
}
