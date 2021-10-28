/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:55:13 by dduvivie          #+#    #+#             */
/*   Updated: 2021/10/28 13:12:33 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		j;
	int		k;

	str = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!str)
		return (0);
	k = 0;
	while (*s1)
	{
		j = 0;
		while (set[j] && *s1 == set[j])
		{
			s1++;
			j++;
		}
		if (set[j])
		{
			s1 -= j;
			str[k] = *s1;
			s1++;
			k++;
		}
	}
	return (str);
}
