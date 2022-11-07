/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jael-mor <jael-mor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:35:58 by jael-mor          #+#    #+#             */
/*   Updated: 2022/11/07 18:22:10 by jael-mor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
// #include <stdio.h>
// int	main()
// {
// 	t_list	*head , *n1, *n2, *n3, *n4;
	
// 	head = ft_lstnew(ft_strdup("head -> "));
// 	n1 = ft_lstnew(ft_strdup("node 1 -> "));
// 	n2 = ft_lstnew(ft_strdup("node 2 -> "));
// 	n3 = ft_lstnew(ft_strdup("node 3 -> "));
// 	n4 = ft_lstnew(ft_strdup("node 4 -> NULL"));

// 	head->next = n1;
// 	n1->next = n2;
// 	n2->next = n3;
// 	n3->next = n4;
 
// 	ft_lstdelone(n1, free);
	
// 	while (head != NULL)
// 	{
// 		printf("%s", head->content);
// 		head = head->next;
// 	}
	
// }