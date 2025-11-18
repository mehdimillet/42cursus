/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 05:15:35 by memillet          #+#    #+#             */
/*   Updated: 2025/11/17 21:02:37 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <fcntl.h>
# include "./Libft/libft.h"
# include "./ft_printf/ft_printf.h"

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

#endif
