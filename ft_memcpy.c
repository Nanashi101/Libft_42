/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jael-mor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:57:36 by jael-mor          #+#    #+#             */
/*   Updated: 2022/10/18 10:05:30 by jael-mor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	d = dest;
	s = src;
	if (s == d)
		return (d);
	if (d == 0 && s == 0)
	{
		return (0);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*int	main()
{
	int a = 0;
	int	b = 1337;

	ft_memcpy(&a, &b, 4);
	printf("%d", a);

	//char str[] = "zello";
	//char *s = str+1;

	//char	*n = ft_memcpy(s, str, 6);

	//printf("%s", ft_memcpy(s, str, 6));
	// while (i < 6)
	// {
	// 	printf("%c", *n);
	// 	i++;
	// 	n++;
	// }
	//return (0);
}// overlap*/