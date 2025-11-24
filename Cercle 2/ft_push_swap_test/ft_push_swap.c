/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 21:00:17 by memillet          #+#    #+#             */
/*   Updated: 2025/11/24 17:23:57 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_turkish_sort(t_data *s)
{
	if (!s->a || !s->a->next)
		return ;
	ft_init_index(s->a);
	ft_push_chunks(s);
	ft_push_back(s);
}

void	ft_sort_three(t_data *stack)
{
	int	a;
	int	b;
	int	c;

	if (!stack->a || !stack->a->next || !stack->a->next->next)
		return ;
	a = stack->a->index;
	b = stack->a->next->index;
	c = stack->a->next->next->index;
	if (a > b && b < c && a < c)
		ft_swap_a(stack);
	else if (a > b && b > c)
	{
		ft_swap_a(stack);
		ft_reverse_a(stack);
	}
	else if (a > c && b < c)
		ft_rotate_a(stack);
	else if (a < b && b > c && a < c)
	{
		ft_swap_a(stack);
		ft_rotate_a(stack);
	}
	else if (a < b && b > c && a > c)
		ft_reverse_a(stack);
}

void	ft_sort_five(t_data *stack)
{
	if (!stack->a || !stack->a->next)
		return ;
	while (ft_stacks_len(stack->a) > 3)
	{
		if (stack->a->index == 0 || stack->a->index == 1)
			ft_push_b(stack);
		else
			ft_rotate_a(stack);
	}
	ft_sort_three(stack);
	while (stack->b)
	{
		if (stack->b->index == 0 || stack->b->index == 1)
			ft_push_a(stack);
		else
		{
			ft_push_a(stack);
			ft_rotate_a(stack);
		}
	}
}

void	ft_clear(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
