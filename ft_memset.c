/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jael-mor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:46:54 by jael-mor          #+#    #+#             */
/*   Updated: 2022/10/11 21:46:57 by jael-mor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n-- > 0)
	{
		*ptr++ = (unsigned char)c;
	}
	return (s);
}
#include <stdio.h>
int	main()
{
	int	str[] = {1, 3, 1978673, 797, 8};
	int i = 0;
	ft_memset((str + 2), 405, 4);
	while (i < 3)
	{  
		printf("%d\n", str[i]);
		i++;
	}
	return (0);
	
}
