/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 05:16:15 by memillet          #+#    #+#             */
/*   Updated: 2025/11/18 02:57:48 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

/*
	En vrai pour ne pas depasser la limite de ligne par fonction, on peux faire une N ieme fonction pour ajouter les elements a la listes chainee principale.
	A FAIRE DANS LE PARSING :
		f- From argc arv -> int;
		f- Cas ou argv[1] est une grande chaine de caractere. ex: ./a.out"1 56 -8"
		(en f)- Cas ou les nombres sont sur plusieurs arguments: ex ./a.out 1 5 98 -5 1 2 3 5 8
		f- Mettre les chaines de caracteres en int 
		f- Print "Error\n" en cas d'erreur
		- Cas d'erreur :
			f- Pas que des ints
			- (en f)Valeurs plus grande que le int max
			- Pas d'arguments (fait)
			-(en f) Presence de duplicata
		f- A la fin mettre chaque int dans une node (sans oublier de malloc ta new node <3 aandreo)
*/

// the 3 function ahead check if we have valid arguments : only int which are not biger than the max or the int, and check if therr is duplicata;
int check_duplicate(char **lst)
{
	int i = 1;
	int j = 1;

	if (!lst)
		return (printf("Empty string\n"), 0);
	while (lst[j])
	{
		i = 1;
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

t_stack	**argc_two(char **argv, t_stack **list, t_stack *new)
{
	char	**rtn;
	int		i;

	i = 0;
	while (argv[1][i])
	{
		if (ft_isalnum(argv[1][i]) != 1)
			return(ft_printf ("letter in argument"));
		i++;
	}
	i = 0;
	if (check_duplicate(argv) != 1)
		return(ft_printf("duplicata"));
	rtn = ft_split(argv[1],' ');
	while (rtn[i])
	{
		new = ft_lstnew(ft_atoi(rtn[i]));
		//potentielles erreurs du a atoi qui renvoi NULL si on a un int max ou min 
		if (!new->data)
			return (ft_printf("int max or min"));
		ft_lstadd_back(list,new);
		i++;
	}
}

t_stack	*multiple_argv(char *argv, t_stack **head)
{
	size_t	j;
	t_stack	*node;
	int		minus;
	int		nb;

	j = 0;
	minus = 0;
	node = NULL;
	while (argv[j])
	{
		if (argv[j] == '-')
				minus++;
		if (ft_isdigit(argv[j]) == 0 && minus > 1)
			return (printf("Error\n"), NULL);
		j++;
	}
	nb = atoi(argv);
	printf("%d\n", nb);
	// node = ft_lstnew(&nb);
	// if (!node)
	// 	return (NULL);
	// ft_lstaddback(&head, node);
	return (node);
}

t_stack	**verif_arg(int argc, char **argv)
{
	size_t	i;
	char	number[11];
	char	**rtn;
	t_stack	*new;
	t_stack	**list;
	
	list = malloc(sizeof(t_stack *));
	(!lst)
		list = NULL;
	i = 0;
	ft_memset(number, 0, sizeof(number));
	if (argc < 2)
		return(ft_printf("too few arguments"), NULL);
	if (argc == 2)
	{
		list = argc_two(argv, list, new);
	}
	if (argc > 2)
	{
		while(i < argc)
		{
			if (multiple_argv(argv[i], &list) == NULL)
				return(NULL);
			i++;
		}
	}
	return(list);
}

int main(int argc, char **arv)
{
	// int i = 0;
	// char **lst;
	// printf("%d\n", check_duplicate(arv));
	verif_arg(argc, arv);
	return (0);
}