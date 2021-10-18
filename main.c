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
	char	str[] = "123456789\0";

	printf("%s\n", str);
	bzero(str, sizeof(str));
	printf("%s\n", str);
	return (0);
}
