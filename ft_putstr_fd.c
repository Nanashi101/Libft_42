/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jael-mor <jael-mor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:09:56 by jael-mor          #+#    #+#             */
/*   Updated: 2022/11/07 14:32:47 by jael-mor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s || fd < 0)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*#include <stdio.h>
#include <fcntl.h>
int main()
{
	int fd;
	fd = open("file.txt", O_WRONLY | O_RDONLY, 0777);
	ft_putstr_fd("helloooo", fd);
}*/
