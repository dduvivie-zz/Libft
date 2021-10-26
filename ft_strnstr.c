/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:39:44 by dduvivie          #+#    #+#             */
/*   Updated: 2021/10/26 10:40:07 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr_h;
	char	*ptr_n;
	int		i;
	size_t	len_n;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	len_n = ft_strlen(needle);
	while (i++ <= (int)(len - len_n))
	{
		ptr_h = (char *)haystack;
		ptr_n = (char *)needle;
		while (*ptr_n && *ptr_h == *ptr_n)
		{
			ptr_h++;
			ptr_n++;
		}
		if (!*ptr_n)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
