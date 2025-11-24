/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 21:30:00 by memillet          #+#    #+#             */
/*   Updated: 2025/11/18 02:48:14 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_tablen(char **tab)
{
	int	i;
	
	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	free_tab(char **s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
		while (s[i])
			free(s[i++]);
		free(s);
}

int	count_words(int argc, char **argv)
{
	int		total;
	int		i;
	char	**tmp;

	total = 0;
	i = 1;
	while (i < argc)
	{
		tmp = ft_split(argv[i], ' ');
		total += tablen(tmp);
		free_tab(tmp);
		i++;		
	}
	return (total);
}

int	ft_check_nb_sign(char *lst)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (lst[i])
	{
		if (lst[i] == '-' || lst[i] == '+')
			j++;
		i++;
	}
	return (j);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
