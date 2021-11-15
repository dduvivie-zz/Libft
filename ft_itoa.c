/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:07:15 by dduvivie          #+#    #+#             */
/*   Updated: 2021/11/15 17:43:41 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Get the length of string we will need to allocate memory later.
*/
static int	get_len(int n)
{
	int		count;
	long	num;

	count = 0;
	num = (long)n;
	if (num < 0)
	{
		num *= -1;
		count++;
	}
	while (num > 9)
	{
		count++;
		num = num / 10;
	}
	count++;
	return (count);
}

/*
Allocates (with malloc(3)) and returns a string representing the integer
received as an argument. Negative numbers must be handled.

Parameters: 1. The integer to convert.
Return:		The string representing the integer. NULL if the allocation fails.
*/
char	*ft_itoa(int n)
{
	int				len;
	char			*str;
	long long int	num;

	len = get_len(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len] = '\0';
	num = (long long int)n;
	if (num < 0)
	{
		num *= -1;
		str[0] = '-';
	}
	len--;
	while (len > 0 && num > 9)
	{
		str[len] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	str[len] = (num % 10) + '0';
	return (str);
}
