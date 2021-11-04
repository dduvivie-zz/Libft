/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:07:15 by dduvivie          #+#    #+#             */
/*   Updated: 2021/11/04 15:02:49 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int		count;
	double	num;

	count = 0;
	num = (double)n;
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
