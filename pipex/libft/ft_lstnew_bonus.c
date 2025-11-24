/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 01:25:12 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:44:36 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/* int main(void)
{
	void *content = "Hello, World!";
	t_list *new_node = ft_lstnew(content);
	if (new_node)
	{
		printf("Node content: %s\n", (char *)new_node->content);
		printf("Node next: %p\n", (void *)new_node->next);
		free(new_node);
	}
	return 0;
} */
