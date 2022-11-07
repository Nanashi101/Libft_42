/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jael-mor <jael-mor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:14:27 by jael-mor          #+#    #+#             */
/*   Updated: 2022/11/07 18:21:56 by jael-mor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>
int	main()
{
	t_list	*head , *n1, *n2, *n3, *n4;
	
	head = ft_lstnew("head -> ");
	n2 = ft_lstnew("node 2 -> ");
	n1 = ft_lstnew("node 1 -> ");
	n3 = ft_lstnew("node 3 -> ");
	n4 = ft_lstnew("node 4 -> NULL");

	head->next = n2;
	n2->next = n3;
	ft_lstadd_front(&head, n1);
	n3->next = n4;

	while (head != NULL)
	{
		printf("%s", head->content);
		head = head->next;
	}
}*/