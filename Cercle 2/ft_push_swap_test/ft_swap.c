/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 05:09:53 by memillet          #+#    #+#             */
/*   Updated: 2025/11/19 04:33:07 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap_a(t_data *stack)
{
	int	tmp;

	if (!stack->a || !stack->a->next)
		return ;
	tmp = stack->a->data;
	stack->a->data = stack->a->next->data;
	stack->a->next->data = tmp;
	write(1, "sa\n", 3);
}

void	ft_swap_b(t_data *stack)
{
	int	tmp;

	if (!stack->b || !stack->b->next)
		return ;
	tmp = stack->b->data;
	stack->b->data = stack->b->next->data;
	stack->b->next->data = tmp;
	write(1, "sb\n", 3);
}

void	ft_swap_s(t_data *stack)
{
	int	tmp;
	int	did;

	did = 0;
	if (stack->a && stack->a->next)
	{
		tmp = stack->a->data;
		stack->a->data = stack->a->next->data;
		stack->a->next->data = tmp;
		did = 1;
	}
	if (stack->b && stack->b->next)
	{
		tmp = stack->b->data;
		stack->b->data = stack->b->next->data;
		stack->b->next->data = tmp;
		did = 1;
	}
	if (did)
		write(1, "ss\n", 3);
}
