/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:54:15 by dduvivie          #+#    #+#             */
/*   Updated: 2021/11/05 15:54:16 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "test basic du memcpy !";
	char	buff1[22];

	memcpy(buff1, src, 22);
	ft_memcpy(buff2, src, 22);
	if (!memcmp(buff1, buff2, 22))
		printf("OK\n");
	return (0);
}
