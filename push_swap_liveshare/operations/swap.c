
#include "ft_push_swap.h"

void	ft_swap_a(t_data *stack)
{
	t_list	*first;
	t_list	*second;

	if (stack->a == NULL || stack->a->next == NULL)
		return ;
	first = stack->a;
	second = stack->a->next;
	first->next = second->next;
	second->next = first;
	stack->a = second;
}

void	ft_swap_b(t_data *stack)
{
	t_list	*first;
	t_list	*second;

	if (stack->b == NULL || stack->b->next == NULL)
		return ;
	first = stack->b;
	second = stack->b->next;
	first->next = second->next;
	second->next = first;
	stack->b = second;
}

void	ft_swap_a_b(t_data *stack_a, t_data *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include "ft_push_swap.h"

// static t_list *new_node(void)
// {
//     t_list *n = malloc(sizeof(*n));
//     if (!n)
//     {
//         perror("malloc");
//         exit(EXIT_FAILURE);
//     }
//     n->next = NULL;
//     return n;
// }

// static void print_stack(const char *name, t_list *head)
// {
//     printf("%s:", name);
//     while (head)
//     {
//         printf(" %p", (void *)head);
//         head = head->next;
//     }
//     printf("\n");
// }

// int main(void)
// {
//     t_data stack = {0};
//     t_data stack_b = {0};

//     /* construire stack.a avec 3 noeuds (A1 -> A2 -> A3) */
//     t_list *a1 = new_node();
//     t_list *a2 = new_node();
//     t_list *a3 = new_node();
//     a1->next = a2;
//     a2->next = a3;
//     stack.a = a1;

//     /* construire stack_b avec 2 noeuds (B1 -> B2) */
//     t_list *b1 = new_node();
//     t_list *b2 = new_node();
//     b1->next = b2;
//     stack_b.b = b1;

//     printf("Avant swap:\n");
//     print_stack("stack.a", stack.a);
//     print_stack("stack_b.b", stack_b.b);

//     /* tester ft_swap_a (swapper les deux premiers de a) */
//     ft_swap_a(&stack);
//     printf("\nAprès ft_swap_a(&stack):\n");
//     print_stack("stack.a", stack.a);

//     /* tester ft_swap_b (swapper les deux premiers de b) */
//     ft_swap_b(&stack_b);
//     printf("\nAprès ft_swap_b(&stack_b):\n");
//     print_stack("stack_b.b", stack_b.b);

//     /* libérer la mémoire (simple, sans parcours complet car test) */
//     free(a1);
//     free(a2);
//     free(a3);
//     free(b1);
//     free(b2);

//     return 0;
// }