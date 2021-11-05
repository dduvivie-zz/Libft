/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:16:56 by dduvivie          #+#    #+#             */
/*   Updated: 2021/11/05 12:16:57 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int	main(void)
{
	int		fd;

	fd = open("text.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR | S_IXUSR);
	if (fd == -1)
		exit(0);
	ft_putchar_fd('c', fd);
	return (0);
}
*/
