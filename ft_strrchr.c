/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:08:02 by dduvivie          #+#    #+#             */
/*   Updated: 2021/10/25 12:43:17 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		found;

	found = 0;
	while (*s)
	{
		if (*s == c)
			found = 1;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	else if (!found)
		return (0);
	else
	{
		while (*s != c)
			s--;
		return ((char *)s);
	}
}
