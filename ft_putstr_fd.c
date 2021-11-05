/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:41:46 by dduvivie          #+#    #+#             */
/*   Updated: 2021/11/05 15:17:17 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*
int	main(void)
{
	int		fd;

	fd = open("text2.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR | S_IXUSR);
	if (fd == -1)
		exit(0);
	ft_putstr_fd("Hello!\n", fd);
	return (0);
}
*/
