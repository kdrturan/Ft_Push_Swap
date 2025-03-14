/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:37:41 by abturan           #+#    #+#             */
/*   Updated: 2025/03/05 17:59:59 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	determine(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = stack_size(*stack_a);
	if (size == 1)
		return ;
	else if (size == 2)
		ra(stack_a, 1);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a, stack_b);
	else if (size == 5)
		sort_five(stack_a, stack_b);
	else
		sort_radix(stack_a, stack_b);
}

int	main(int ac, char *args[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	check_errors(ac, args);
	stack_a = ps_parse(ac, args);
	dupcontrol(&stack_a);
	if (!is_sorted(stack_a))
	{
		stack_free(&stack_a);
		return (0);
	}
	stack_b = NULL;
	set_index(&stack_a);
	determine(&stack_a, &stack_b);
	stack_free(&stack_a);
}
