#include "ft_push_swap.h"

void	ft_reverse_a(t_list *stack)
{
    t_stack *first;
    t_stack *second;
    t_stack *last;

	if (!stack->a || !stack->a->next)
		return ;
	first = stack->a;
	while (stack->a->next->next)
		stack->a = stack->a->next;
	second = stack->a;
	last = stack->a->next;
	last->next = first;
	second->next = NULL;
	first = last;
	stack->a = first;
}

void	ft_reverse_b(t_list *stack)
{
    t_stack *first;
    t_stack *second;
    t_stack *last;

	if (!stack->b || !stack->b->next)
		return ;
	first = stack->b;
	while (stack->b->next->next)
		stack->b = stack->b->next;
	second = stack->b;
	last = stack->b->next;
	last->next = first;
	second->next = NULL;
	first = last;
	stack->b = first;
}

void	ft_reverse_a_b(t_data *stack_a, t_data *stack_b)
{
    ft_reverse_a(stack_a);
    ft_reverse_b(stack_b);
}