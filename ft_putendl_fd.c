/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:19:13 by dduvivie          #+#    #+#             */
/*   Updated: 2021/11/05 15:25:30 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

/*
int	main(void)
{
	int		fd;

	fd = open("text3.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR | S_IXUSR);
	if (fd == -1)
		exit(0);
	ft_putendl_fd("Hello!", fd);
	return (0);
}
*/
