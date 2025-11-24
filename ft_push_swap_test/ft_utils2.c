/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 02:52:28 by memillet          #+#    #+#             */
/*   Updated: 2025/11/19 04:27:06 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

long	ft_atol(const char *nptr)
{
	int		i;
	long	result;
	int		sign;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == 9 || nptr[i] == 10 || nptr[i] == 11
		|| nptr[i] == 12 || nptr[i] == 13 || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

t_stack	*ft_new(int value)
{
	t_stack	*new;

	new = malloc (sizeof (t_stack));
	if (!new)
		return (NULL);
	new->data = value;
	new->next = NULL;
	new->index = -1;
	return (new);
}

void	ft_add_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_last(*lst);
	last -> next = new;
}

t_stack	*ft_last(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	is_sorted(t_stack *a)
{
	while (a && a->next)
	{
		if (a->data > a->next->data)
			return (0);
		a = a->next;
	}
	return (1);
}
