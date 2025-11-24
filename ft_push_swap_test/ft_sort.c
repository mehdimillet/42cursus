/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 05:02:14 by memillet          #+#    #+#             */
/*   Updated: 2025/11/19 04:28:26 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_init_index(t_stack *a)
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
			break ;
		smallest->index = index;
		index++;
	}
}

int	ft_stacks_len(t_stack *s)
{
	int	i;

	i = 0;
	while (s)
	{
		i++;
		s = s->next;
	}
	return (i);
}

int	ft_find_pos(t_stack *a, int index)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a->index == index)
			return (i);
		i++;
		a = a->next;
	}
	return (-1);
}

void	ft_push_chunks(t_data *s)
{
	int	chunk;
	int	limit;
	int	i;

	chunk = 20;
	limit = chunk;
	i = 0;
	while (s->a)
	{
		if (s->a->index <= i)
		{
			ft_push_b(s);
			ft_rotate_b(s);
			i++;
		}
		else if (s->a->index <= limit)
		{
			ft_push_b(s);
			i++;
		}
		else
			ft_rotate_a(s);
		if (i == limit)
			limit += chunk;
	}
}

void	ft_push_back(t_data *s)
{
	int	max;
	int	pos;
	int	len;
	int	rot;
	t_stack *cur;

	while (s->b)
	{
		cur = s->b;
		max = INT_MIN;
		while (cur)
		{
			if (cur->index > max)
				max = cur->index;
			cur = cur->next;
		}
		len = ft_stacks_len(s->b);
		pos = ft_find_pos(s->b, max);
		if (pos == -1)
			break ;	
		if (pos <= len / 2)
			while (pos-- > 0)
				ft_rotate_b(s);
		else
		{
			rot = len - pos;	
			while (rot-- > 0)
					ft_reverse_b(s);
		}
		ft_push_a(s);
	}
}
