/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jael-mor <jael-mor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:07:41 by jael-mor          #+#    #+#             */
/*   Updated: 2022/11/07 14:30:48 by jael-mor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*#include <stdio.h>
#include <fcntl.h>
int main()
{
	int fd;
	fd = open("file.txt", O_WRONLY | O_RDONLY, 0777);
	ft_putendl_fd("", fd);
}*/
