/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:28:45 by dduvivie          #+#    #+#             */
/*   Updated: 2021/11/05 15:38:52 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*num;
	int		i;

	num = ft_itoa(n);
	i = 0;
	while (num[i])
	{
		write(fd, &num[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	int		fd;

	fd = open("text4.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR | S_IXUSR);
	if (fd == -1)
		exit(0);
	ft_putnbr_fd(6, fd);
	return (0);
}
*/
