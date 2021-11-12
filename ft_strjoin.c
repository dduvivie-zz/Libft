/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:39:20 by dduvivie          #+#    #+#             */
/*   Updated: 2021/11/12 11:42:02 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
This function allocates (with malloc) and returns a new string,
which is the result of the concatenation of ’s1’ and ’s2’.

Parameters: 1. The prefix string.
			2. The suffix string.
Return:		The new string. NULL if the allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;
	int		i;

	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	str = malloc(len * sizeof(char));
	if (!str)
		return (0);
	while (*s1)
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		str[i] = *s2;
		s2++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
