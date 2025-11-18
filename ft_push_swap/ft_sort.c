/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 05:02:14 by memillet          #+#    #+#             */
/*   Updated: 2025/11/18 05:05:27 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	init_index(t_stack *a)
{
	t_stack	*cur;
	t_stack	*smallest;
	long	min;
	int		index;

	index = 0;
	while (1)
	{
		cur = a;
		smallest = NULL;
		min = LONG_MAX;
		while (cur)
		{
			if (cur->index == -1 && cur->data < min)
			{
				min = cur->data;
				smallest = cur;
			}
			cur = cur->next;
		}
		if (!smallest)
			break;
		smallest->index = index;
		index++;
	}
}
