#include "push_swap.h"

int	is_sorted(t_stack* stack)
{
	t_stack*	tmp;

	tmp = stack;
	while (tmp->next)
	{
		if (tmp->val > tmp->next->val)
			return (1);
		tmp = tmp->next;
	}
	return (0);	
}

int	find_min(t_stack *stack)
{
	int	min;
	
	if (!stack)
		return (0);
	min = stack->val;
	while (stack)
	{
		if (stack->val < min)
			min = stack->val;
		stack = stack->next;
	}
	return min;
}

int	find_max_bits(int size)
{
	int	max_bits;

	max_bits = 0;
	while (((size - 1) >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}
