/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jael-mor <jael-mor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:21:24 by jael-mor          #+#    #+#             */
/*   Updated: 2022/11/07 18:22:29 by jael-mor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		counter++;
	}
	return (counter);
}
// #include <stdio.h>
// int	main()
// {
// 	t_list	*head , *n1, *n2, *n3, *n4;
	
// 	head = ft_lstnew("head -> ");
// 	n1 = ft_lstnew("node 1 -> ");
// 	n2 = ft_lstnew("node 2 -> ");
// 	n3 = ft_lstnew("node 3 -> ");
// 	n4 = ft_lstnew("node 4 -> NULL");

// 	head->next = n1;
// 	n1->next = n2;
// 	n2->next = n3;
// 	n3->next = n4;

// 	printf("%d ",ft_lstsize(head));
// 	while (head != NULL)
// 	{
// 		printf("%s", head->content);
// 		head = head->next;
// 	}
// }