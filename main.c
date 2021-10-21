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
	char	str1[10] = "abcdefg\0";
	char	str2[10] = "_______\0";

	printf("%zu\n", ft_strlen(str1));
	printf("%zu\n", ft_strlcpy(str2, str1, 3));
	printf("%s\n", str2);
	return (0);
}
