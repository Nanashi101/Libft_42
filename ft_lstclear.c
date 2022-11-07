/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jael-mor <jael-mor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:38:55 by jael-mor          #+#    #+#             */
/*   Updated: 2022/11/07 18:22:03 by jael-mor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !*lst || !del)
		return ;
	if (lst && del)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = tmp;
		}
	}
	*lst = NULL;
}
/*#include <stdio.h>
int	main()
{
	t_list	*head , *n1, *n2, *n3, *n4;
	
	head = ft_lstnew(ft_strdup("head -> "));
	n1 = ft_lstnew(ft_strdup("node 1 -> "));
	n2 = ft_lstnew(ft_strdup("node 2 -> "));
	n3 = ft_lstnew(ft_strdup("node 3 -> "));
	n4 = ft_lstnew(ft_strdup("node 4 -> NULL"));

	head->next = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
 
	ft_lstclear(&head, free);
	
	while (head != NULL)
	{
		printf("%s", head->content);
		head = head->next;
	}
	
}*/