/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 23:02:35 by memillet          #+#    #+#             */
/*   Updated: 2025/11/19 04:41:55 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

char	**ft_call_parsing(int argc, char **argv)
{
	char	**lst;

	lst = ft_convert_in_list(argc, argv);
	if (!lst)
		return (NULL);
	if (ft_verif_element(lst) != 1)
		return (free_tab(lst), NULL);
	if (ft_no_overflows(lst) != 1)
		return (free_tab(lst), NULL);
	if (ft_check_duplicate(lst) != 1)
		return (free_tab(lst), NULL);
	return (lst);
}

int	ft_exe_algo(t_data *data)
{
	int	size;

	ft_init_index(data->a);
	if (is_sorted(data->a))
	{
		ft_clear(&data->a);
		return (0);
	}
	size = ft_stacks_len(data->a);
	if (size == 2)
		ft_swap_a(data);
	else if (size == 3)
		ft_sort_three(data);
	else if (size <= 5)
		ft_sort_five(data);
	else
		ft_turkish_sort(data);
	ft_clear(&data->a);
	ft_clear(&data->b);
	return (0);
}

int	main(int argc, char **argv)
{
	char	**lst;
	t_data	data;

	if (argc < 2)
		return (0);
	lst = ft_call_parsing(argc, argv);
	if (!lst)
		return (1);
	data.a = ft_create_stack(lst);
	free_tab(lst);
	if (!data.a)
		return (1);
	data.b = NULL;
	return (ft_exe_algo(&data));
}
