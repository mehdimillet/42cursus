/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 20:59:39 by memillet          #+#    #+#             */
/*   Updated: 2025/11/18 04:45:47 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

char	**ft_convert_in_list(int argc, char **argv)
{
	char	**lst;
	char	**tmp;
	int		k;
	int		i;
	int		j;

	k = 0;
	i = 1;
	if (argc < 2)
		return(ft_printf("Error : invalid number of argument"), NULL);
	lst = malloc(sizeof (char *) * (count_words(argc, argv) + 1));
	if (!lst)
		return (NULL);
	while (i < argc)
	{
		tmp = ft_split(argv[i], ' ');
		j = 0;
		while (tmp[j])
			lst[k++] = ft_strdup(tmp[j++]);
		free_split(tmp);
		i++;
	}
	lst[k] = NULL;
	return (lst);
}

int	ft_verif_element(char **lst)
{
	int	i;
	int	j;
	
	i = 0;
	while (lst[i])
	{
		j = 0;
		if ((lst[i][j] == '+') || (lst[i][j] == '-'))
			j++;
		if(!lst[i][j])
			return(ft_printf("Error : invalid argument\n"), 0);
		while (lst[i][j])
		{
			if (!((lst[i][j] >= '0') && (lst[i][j] <= '9')))
				return(ft_printf("Error : invalid argument\n"), 0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_no_overflows(char **lst)
{
	int	i;
	int	j;

	i = 0;
	while (lst[i])
	{
		j = 0;
		if (lst[i][j] == '-' || lst[i][j] == '+')
				j++;
		if (ft_strlen(lst[i] + j) > 10)
			return(ft_printf("Error : invalid argument\n"), 0);
		if (ft_strlen(lst[i] + j) == 10)
		{
			if ((lst[i][0] == '-') && (ft_strcmp(lst[i] + j, "2147483648") > 0))
					return (ft_printf("Error : invalid argument\n"), 0);
			else
			{
				if (ft_strcmp(lst[i] + j, "2147483647") > 0)
					return (ft_printf("Error : invalid argument\n"), 0);
			}
		}
		i++;
	}  
	return (1);
}

int	check_duplicate(char **lst)
{
	int i = 0;
	int j = 0;

	if (!lst)
		return (printf("Empty string\n"), 0);
	while (lst[j])
	{
		i = 0;
		while (i < j)
		{
			if (ft_strcmp(lst[i], lst[j]) == 0)
				return (ft_printf("There is a duplicate int\n"), 0);
			i++;
		}
		j++;
	}
	return (1);
}

t_stack	*ft_create_stack(char **lst)
{
	t_stack	*head;
	t_stack	*new;
	int		i;
	long	value;

	i = 0;
	head = NULL;
	while (lst[i])
	{
		value = ft_atol(lst[i]);
		new = ft_lstnew(value);
		if (!new)
			return(NULL);
		ft_add_back(&head, new);
		i++;		
	}
	return (head);
}
