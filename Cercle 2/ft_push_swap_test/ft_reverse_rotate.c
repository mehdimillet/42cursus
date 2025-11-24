/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 05:09:44 by memillet          #+#    #+#             */
/*   Updated: 2025/11/19 04:30:35 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_reverse_a(t_data *stack)
{
	t_stack	*prev;
	t_stack	*last;

	if (!stack->a || !stack->a->next)
		return ;
	prev = NULL;
	last = stack->a;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = stack->a;
	stack->a = last;
	write(1, "rra\n", 4);
}

void	ft_reverse_b(t_data *stack)
{
	t_stack	*prev;
	t_stack	*last;

	if (!stack->b || !stack->b->next)
		return ;
	prev = NULL;
	last = stack->b;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = stack->b;
	stack->b = last;
	write(1, "rrb\n", 4);
}

void	ft_reverse_r(t_data *stack)
{
	t_stack *prev;
	t_stack *last;

	if ((!stack->a || !stack->a->next) && (!stack->b || !stack->b->next))
		return ;
	if (stack->a && stack->a->next)
	{
		prev = NULL;
		last = stack->a;
		while (last->next)
		{
			prev = last;
			last = last->next;
		}
		prev->next = NULL;
		last->next = stack->a;
		stack->a = last;
	}
	if (stack->b && stack->b->next)
	{
		prev = NULL;
		last = stack->b;
		while (last->next)
		{
			prev = last;
			last = last->next;
		}
		prev->next = NULL;
		last->next = stack->b;
		stack->b = last;
	}
	write(1, "rrr\n", 4);
}
