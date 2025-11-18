
#include "ft_push_swap.h"

void	ft_push_a(t_data *stack)
{
	t_stack *first;
	t_stack *second;

	if (!stack->b)
		return ;
	first = stack->a;
	second = stack->b;
	stack->b = stack->b->next;
	second->next = first;
	stack->a = second;
}

void	ft_push_b(t_data *stack)
{
	t_stack *first;
	t_stack *second;

	if (!stack->b)
		return ;
	first = stack->a;
	second = stack->b;
	stack->a = stack->a->next;
	first->next = second;
	stack->b = first;
}