#include "push_swap.h"

void	ra(t_stack **stack, int msg)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = (*stack)->next;
	last = stacklast(*stack);
	last->next = first;
	first->next = NULL;
	if (msg)
		ft_printf("ra\n");
}

void	rb(t_stack **stack, int msg)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = (*stack)->next;
	last = stacklast(*stack);
	last->next = first;
	first->next = NULL;
	if (msg)
		ft_printf("rb\n");
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	ft_printf("rr\n");
}
