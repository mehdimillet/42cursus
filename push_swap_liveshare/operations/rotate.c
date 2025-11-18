
#include "ft_push_swap.h"

void	ft_rotate_a(t_list *stack_a)
{
    t_stack *first;
    t_stack *second;

	if (!stack->a || !stack->a->next)
		return ;
	first = stack->a;
	second = stack->a->next;
	while (stack->a->next)
		stack->a = stack->a->next;
	stack->a->next = first;
	stack->a = second;
	first->next = NULL;
}

void	ft_rotate_b(t_list *stack_a)
{
    t_stack *first;
    t_stack *second;

	if (!stack->b || !stack->b->next)
		return ;
	first = stack->b;
	second = stack->b->next;
	while (stack->b->next)
		stack->b = stack->b->next;
	stack->b->next = first;
	stack->b = second;
	first->next = NULL;
}

void	ft_rotate_a_b(t_data *stack_a, t_data *stack_b)
{
    ft_rotate_a(stack *a);
    ft_rotate_b(stack *b);
}