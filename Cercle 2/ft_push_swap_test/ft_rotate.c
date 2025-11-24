/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 05:09:50 by memillet          #+#    #+#             */
/*   Updated: 2025/11/24 15:25:32 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rotate_a(t_data *stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack->a || !stack->a->next)
		return ;
	first = stack->a;
	stack->a = stack->a->next;
	last = stack->a;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	write(1, "ra\n", 3);
}

void	ft_rotate_b(t_data *stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack->b || !stack->b->next)
		return ;
	first = stack->b;
	stack->b = stack->b->next;
	last = stack->b;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	write(1, "rb\n", 3);
}

void	ft_rotate_r(t_data *stack)
{
	t_stack	*first;
	t_stack	*last;

	if (stack->a && stack->a->next)
	{
		first = stack->a;
		stack->a = stack->a->next;
		last = stack->a;
		while (last->next)
			last = last->next;
		last->next = first;
		first->next = NULL;
	}
	if (stack->b && stack->b->next)
	{
		first = stack->b;
		stack->b = stack->b->next;
		last = stack->b;
		while (last->next)
			last = last->next;
		last->next = first;
		first->next = NULL;
	}
	write(1, "rr\n", 3);
}
