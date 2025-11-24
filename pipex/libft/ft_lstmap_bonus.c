/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 02:55:24 by marvin            #+#    #+#             */
/*   Updated: 2025/10/22 02:55:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list_current;
	t_list	*new_list_start;
	void	*content;

	new_list_current = NULL;
	new_list_start = NULL;
	content = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_list_current = ft_lstnew(content);
		if (!new_list_current)
		{
			del(content);
			ft_lstclear(&new_list_start, del);
			return (NULL);
		}
		if (!new_list_start)
			new_list_start = new_list_current;
		else
			ft_lstadd_back(&new_list_start, new_list_current);
		lst = lst->next;
	}
	return (new_list_start);
}
/* int main(void)
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew("1");
	t_list *node2 = ft_lstnew("2");
	t_list *node3 = ft_lstnew("3");

	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);

	void *transform(void *content)
	{
		int num = atoi((char *)content);
		num *= 2;
		char *new_content = malloc(12 * sizeof(char));
		sprintf(new_content, "%d", num);
		return (new_content);
	}

	void delete_content(void *content)
	{
		free(content);
	}

	t_list *new_head = ft_lstmap(head, transform, delete_content);

	t_list *current = new_head;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	ft_lstclear(&head, free);
	ft_lstclear(&new_head, delete_content);
	return 0;
} */
