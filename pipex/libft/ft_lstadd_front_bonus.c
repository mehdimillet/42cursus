/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddfront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 01:23:25 by marvin            #+#    #+#             */
/*   Updated: 2025/10/22 01:23:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/* int main(void)
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew("Second");
	t_list *node2 = ft_lstnew("First");

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);

	t_list *current = head;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	// Free the list
	ft_lstclear(&head, free);
	return 0;
} */
