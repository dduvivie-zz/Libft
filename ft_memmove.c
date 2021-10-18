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

void	*ft_memmove(void *dest, const void *src, int n)
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
