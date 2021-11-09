/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:09:32 by dduvivie          #+#    #+#             */
/*   Updated: 2021/10/25 15:37:14 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (n == 0)
		return (0);
	while (--n > 0 && (unsigned char)*str1 == (unsigned char)*str2)
	{
		str1++;
		str2++;
	}
	if ((unsigned char)*str1 > (unsigned char)*str2)
		return (1);
	else if ((unsigned char)*str1 == (unsigned char)*str2)
		return (0);
	else
		return (-1);
}
