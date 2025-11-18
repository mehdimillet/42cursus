/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 02:52:28 by memillet          #+#    #+#             */
/*   Updated: 2025/11/18 03:36:01 by memillet         ###   ########.fr       */
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

t_stack	*ft_lstnew(int value)
{
	t_stack	*new;

	new = malloc (sizeof (t_stack));
	if (!new)
		return (NULL);
	new->data = value;
	new->next = NULL;
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
	last = ft_lstlast(*lst);
	last -> next = new;
}

