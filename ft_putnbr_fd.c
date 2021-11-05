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

void	ft_putnbr_fd(int n, int fd)
{
	write(fd, &n, 4);
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
