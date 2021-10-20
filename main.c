/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:54:49 by dduvivie          #+#    #+#             */
/*   Updated: 2021/10/18 10:54:52 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	str1[10] = "abcde\0";
	char	str2[10] = "abcde\0";


	printf("%s\n", str1);
	ft_memcpy(str1+2, str1, 3);
	printf("%s\n", str1);
	printf("%s\n", str2);
	ft_memmove(str2+2, str2, 3);
	printf("%s\n", str2);
	return (0);
}
