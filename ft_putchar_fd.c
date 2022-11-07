/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jael-mor <jael-mor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:06:37 by jael-mor          #+#    #+#             */
/*   Updated: 2022/11/07 14:31:02 by jael-mor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
/*#include <stdio.h>
#include <fcntl.h>
int main()
{
	int fd;
	fd = open("file.txt", O_WRONLY | O_RDONLY, 0777);
	ft_putchar_fd('a', fd);
}*/