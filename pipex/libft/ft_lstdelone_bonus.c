/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 02:07:32 by marvin            #+#    #+#             */
/*   Updated: 2025/10/22 02:07:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free (lst);
}
/* int main(void)
{
	t_list *node = ft_lstnew("Sample Content");
	if (node)
	{
		printf("Before deletion: %s\n", (char *)node->content);
		ft_lstdelone(node, free);
		// After deletion, node is freed, so we cannot access its content.
		printf("Node deleted successfully.\n");
	}
	return 0;
} */
