/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:46:43 by dduvivie          #+#    #+#             */
/*   Updated: 2021/10/25 14:35:45 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (--n && (unsigned int)*s1 == (unsigned int)*s2)
	{
		s1++;
		s2++;
	}
	if ((unsigned char)*s1 > (unsigned char)*s2)
		return (1);
	else if ((unsigned char)*s1 == (unsigned char)*s2)
		return (0);
	else
		return (-1);
}
