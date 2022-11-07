/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jael-mor <jael-mor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:50:59 by jael-mor          #+#    #+#             */
/*   Updated: 2022/11/07 18:22:18 by jael-mor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
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
 
// 	printf("%s", ft_lstlast(head)->content);
// }