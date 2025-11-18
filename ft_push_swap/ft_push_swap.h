/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 20:59:54 by memillet          #+#    #+#             */
/*   Updated: 2025/11/18 05:04:43 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

/* ======================= */
/*        INCLUDES         */
/* ======================= */

# include "./libft&printf/Libft/libft.h"
# include "./libft&printf/ft_printf/ft_printf.h"
# include <limits.h>

///////////////////////////////////////////////////////////////////////////////////////////////////

/* ======================= */
/*       	STRUCT         */
/* ======================= */

typedef struct s_stack
{
	struct s_stack	*next;
	int				data;
	int				index;
}	t_stack;

typedef struct s_data
{
	t_stack	*a;
	t_stack *b;
}	t_data;

///////////////////////////////////////////////////////////////////////////////////////////////////

/* ======================= */
/*       	UTILS          */
/* ======================= */

int		ft_tablen(char **tab);
void	free_tab(char **s);
int		count_words(int argc, char **argv);
int		ft_check_nb_sign(char *lst);
int		ft_strcmp(char *s1, char *s2);

///////////////////////////////////////////////////////////////////////////////////////////////////

/* ======================= */
/*       	UTILS2         */
/* ======================= */

long	ft_atol(const char *nptr);
t_stack	*ft_lstnew(int value);
void	ft_add_back(t_stack **lst, t_stack *new);

///////////////////////////////////////////////////////////////////////////////////////////////////

/* ======================= */
/*         PARSING         */
/* ======================= */

char	**ft_convert_in_list(int argc, char **argv);
int		ft_verif_element(char **lst);
int		ft_no_overflows(char **lst);
int		check_duplicate(char **lst);
t_stack	*ft_create_stack(char **lst);

///////////////////////////////////////////////////////////////////////////////////////////////////

#endif