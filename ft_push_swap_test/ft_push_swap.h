/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 20:59:54 by memillet          #+#    #+#             */
/*   Updated: 2025/11/19 04:50:40 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

/* ======================= */
/*        INCLUDES         */
/* ======================= */

# include "./Libft/libft.h"
# include "./ft_printf/ft_printf.h"
# include <limits.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <string.h>

////////////////////////////////////////////////////////////
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
	t_stack	*b;
}	t_data;

////////////////////////////////////////////////////////////

/* ======================= */
/*       	UTILS          */
/* ======================= */

int		ft_tablen(char **tab);
void	free_tab(char **s);
int		ft_count_words(int argc, char **argv);
int		ft_check_nb_sign(char *lst);
int		ft_strcmp(char *s1, char *s2);

////////////////////////////////////////////////////////////

/* ======================= */
/*       	UTILS2         */
/* ======================= */

long	ft_atol(const char *nptr);
t_stack	*ft_new(int value);
void	ft_add_back(t_stack **lst, t_stack *new);
t_stack	*ft_last(t_stack *lst);
int		is_sorted(t_stack *a);

////////////////////////////////////////////////////////////

/* ======================= */
/*         PARSING         */
/* ======================= */

char	**ft_convert_in_list(int argc, char **argv);
int		ft_verif_element(char **lst);
int		ft_no_overflows(char **lst);
int		ft_check_duplicate(char **lst);
t_stack	*ft_create_stack(char **lst);

////////////////////////////////////////////////////////////

/* ======================= */
/*  OPERATIONAL FUNCTIONS  */
/* ======================= */

//push.c
void	ft_push_a(t_data *stack);
void	ft_push_b(t_data *stack);

//swap.c
void	ft_swap_a(t_data *stack);
void	ft_swap_b(t_data *stack);
void	ft_swap_s(t_data *stack);

//rotate.c
void	ft_rotate_a(t_data *stack);
void	ft_rotate_b(t_data *stack);
void	ft_rotate_r(t_data *stack);

//reverse_rotate.c
void	ft_reverse_a(t_data *stack);
void	ft_reverse_b(t_data *stack);
void	ft_reverse_r(t_data *stack);

////////////////////////////////////////////////////////////

/* ======================= */
/*           SORT          */
/* ======================= */

void	ft_init_index(t_stack *a);
int		ft_stacks_len(t_stack *s);
int		ft_find_pos(t_stack *a, int index);
void	ft_push_chunks(t_data *s);
void	ft_push_back(t_data *s);

////////////////////////////////////////////////////////////

/* ======================= */
/*        PUSH_SWAP        */
/* ======================= */

void	ft_turkish_sort(t_data *s);
void	ft_sort_three(t_data *stack);
void	ft_sort_five(t_data *stack);
void	ft_clear(t_stack **lst);

////////////////////////////////////////////////////////////

#endif