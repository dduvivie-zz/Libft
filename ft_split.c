/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:13:55 by dduvivie          #+#    #+#             */
/*   Updated: 2021/10/29 15:05:24 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;
	int	len;

	count = 0;
	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c)
			len++;
		else
		{
			if (len)
			{
				count++;
				len = 0;
			}
		}
		i++;
	}
	if (len)
		count++;
	return (count);
}

static char	*get_str(const char *s, char c)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	split_free(char **t, int elem)
{
	int	i;

	i = 0;
	while (i < elem)
	{
		free(t[i]);
		i++;
	}
	free(t);
}

static char	*get_first_char(char const *s, char c, int flag)
{
	if (flag)
	{
		while (*s == c)
			s++;
	}
	else
	{
		while (*s != c && *s)
			s++;
	}
	return ((char *)s);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**t;

	if (!s) /////
		return (0); /////
	t = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!t)
		return (0);
	i = 0;
	while (*s)
	{
		s = get_first_char(s, c, 1);
		if (*s)
		{
			t[i] = get_str(s, c);
			if (!t[i])
			{
				split_free(t, i);
				return (0);
			}
			s = get_first_char(s, c, 0);
			i++;
		}
	}
	t[i] = 0;
	return (t);
}
