/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:55:13 by dduvivie          #+#    #+#             */
/*   Updated: 2021/11/12 12:53:40 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Get the length to allocate memory.

Parameters: 1. The string to be trimmed.
			2. The reference set of characters to trim.
Return:		The length.
*/
static int	get_len(char const *s1, char const *set)
{
	int	len;
	int	set_i;
	int	found;

	len = 0;
	while (*s1)
	{
		set_i = 0;
		found = 0;
		while (!found && set[set_i])
		{
			if (*s1 == set[set_i])
				found = 1;
			set_i++;
		}
		if (!found)
			len++;
		s1++;
	}
	return (len);
}

/*
Assigns all characters that do not correspond to the characters
in the 'set', to the new string.

Parameters: 1. The string to be trimmed.
			2. The reference set of characters to trim.
			3. The new string which is empty.
Return:		The new string without the characters specified in ’set’.
*/
static char	*exclude_char(char const *s1, char const *set, char *str)
{
	int	set_i;
	int	str_i;
	int	found;

	str_i = 0;
	while (*s1)
	{
		set_i = 0;
		found = 0;
		while (!found && set[set_i])
		{
			if (*s1 == set[set_i])
				found = 1;
			set_i++;
		}
		if (!found)
		{
			str[str_i] = *s1;
			str_i++;
		}
		s1++;
	}
	str[str_i] = '\0';
	return (str);
}

/*
Allocates (with malloc) and returns a copy of ’s1’ 
with the characters specified in ’set’ removed from the beginning
and the end of the string.

Parameters: 1. The string to be trimmed.
			2. The reference set of characters to trim.
Return:		The trimmed string. NULL if the allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;

	len = get_len(s1, set);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str = exclude_char(s1, set, str);
	return (str);
}
