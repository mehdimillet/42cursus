/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 05:16:40 by memillet          #+#    #+#             */
/*   Updated: 2025/11/17 15:42:221 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main (int argc, char **argv)
{
	t_stack **list;
	int		i;

	list = verif_arg(argc, argv);
	while (!list)
	{
		ft_printf("%d\n", list[i]->data);
		list = list[i]->next;
	}
	return (0);
}