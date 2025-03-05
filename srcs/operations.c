#include "push_swap.h"

void	sa(t_stack **stack, int msg)
{
	t_stack	*first;
	t_stack	*second;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	first = (*stack);
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	if (msg)
		ft_printf("sa\n");
}

void	sb(t_stack **stack, int msg)
{
	t_stack	*first;
	t_stack	*second;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	first = (*stack);
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	if (msg)
		ft_printf("sb\n");
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	ft_printf("ss\n");
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a || !stack_b || !(*stack_b))
		return ;
	stack_add_front(stack_a, stack_pop(stack_b));
	ft_printf("pa\n");
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_b || !stack_a || !(*stack_a))
		return ;
	stack_add_front(stack_b, stack_pop(stack_a));
	ft_printf("pb\n");
}
