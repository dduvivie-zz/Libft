/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:01:31 by dduvivie          #+#    #+#             */
/*   Updated: 2021/11/09 12:39:49 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
This function returns a pointer to the first occurrence
of the character c in the string s.
It returns NULL if the character is not found, and returns a pointer
to the terminator if c is specified as '\0'.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c && *s)
		s++;
	if (!*s && (char)c != '\0')
		return (0);
	return ((char *)s);
}
