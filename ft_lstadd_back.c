/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jael-mor <jael-mor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:09:57 by jael-mor          #+#    #+#             */
/*   Updated: 2022/11/07 18:21:45 by jael-mor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		lastnode = *lst;
		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = new;
	}
}

/*#include <stdio.h>
int	main()
{
	t_list	*head , *n1, *n2, *n3, *n4;
	
	head = ft_lstnew("head -> ");
	n4 = ft_lstnew("node 4 -> NULL");
	n1 = ft_lstnew("node 1 -> ");
	n2 = ft_lstnew("node 2 -> ");
	n3 = ft_lstnew("node 3 -> ");
	

	head->next = n4;
	n4->next = n1;
	n1->next = n2;
	n2->next = n3;
	ft_lstadd_back(&head, n4);

	while (head != NULL)
	{
		printf("%s", head->content);
		head = head->next;
	}
}*/
