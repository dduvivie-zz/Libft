/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:08:02 by dduvivie          #+#    #+#             */
/*   Updated: 2021/11/18 13:57:42 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
This function returns a pointer to the last occurrence of the
character c in the string s.
It returns NULL if the character is not found, and returns a pointer
to the terminator if c is specified as '\0'.
*/
char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s) - 1;
	if (c == '\0')
		return (&s[i]);
	while (i >= 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	if (i == -1)
		return (NULL);
}
