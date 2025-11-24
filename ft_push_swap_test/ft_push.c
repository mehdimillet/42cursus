/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 05:09:13 by memillet          #+#    #+#             */
/*   Updated: 2025/11/19 04:49:33 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_push_a(t_data *stack)
{
	t_stack	*tmp;

	if (!stack || !stack->b)
		return ;
	tmp = stack->b;
	stack->b = stack->b->next;
	tmp->next = stack->a;
	stack->a = tmp;
	write(1, "pa\n", 3);
}

void	ft_push_b(t_data *stack)
{
	t_stack	*tmp;

	if (!stack || !stack->a)
		return ;
	tmp = stack->a;
	stack->a = stack->a->next;
	tmp->next = stack->b;
	stack->b = tmp;
	write(1, "pb\n", 3);
}
