/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:13:55 by dduvivie          #+#    #+#             */
/*   Updated: 2021/10/28 13:13:56 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
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

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**t;

	words = count_words(s, c);
	t = malloc((words + 1) * sizeof(char *));
	if (!t)
		return (0);
	// get the length of each words to do malloc
	return(0);
}

int	main(void)
{
	char const	*s = "Blue Black White Red";
	char		c = ' ';
	char		**t = ft_split(s, c);

	if (!t)
		exit(0);
	return (0);
}
