/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:25:33 by dduvivie          #+#    #+#             */
/*   Updated: 2021/10/28 10:38:10 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(len * sizeof(char));
	if (!str)
		return (0);
	while (s[start] != '\0')
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

/*
int	main(void)
{
	char	*s = "Hello";
	char	*str = ft_substr(s, 1, 4);

	printf("%s\n", str);
	free(str);
	return (0);
}
*/
