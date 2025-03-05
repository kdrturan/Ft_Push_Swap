#include "push_swap.h"

void	determine(t_stack** stack_a, t_stack** stack_b)
{
	int	size;

	size = stack_size(*stack_a);
	if (size == 1)
		return;
	else if (size == 2)
			ra(stack_a,1);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a,stack_b);
	else if (size == 5)
		sort_five(stack_a,stack_b);	
	else
		sort_radix(stack_a,stack_b);
}

int main(int ac, char *args[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*tmp;
	
	check_errors(ac, args);
	stack_a = ps_parse(ac, args);
	stack_b = NULL;
	if (!is_sorted(stack_a))
		return (0);
	set_index(&stack_a);
	determine(&stack_a,&stack_b);
	stack_free(&stack_a);
}
