/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:37:29 by abturan           #+#    #+#             */
/*   Updated: 2025/03/05 15:56:57 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **stack)
{
	while (is_sorted(*stack))
	{
		if ((*stack)->val > (*stack)->next->val)
			sa(stack, 1);
		else if ((*stack)->next->val > (*stack)->next->next->val)
			rra(stack, 1);
	}
}

void	sort_four(t_stack **stack, t_stack **stackb)
{
	int	mnode;

	mnode = find_min(*stack);
	while ((*stack)->val != mnode)
		ra(stack, 1);
	pb(stack, stackb);
	sort_three(stack);
	pa(stack, stackb);
}

void	sort_five(t_stack **stack, t_stack **stackb)
{
	int	min;

	min = find_min((*stack));
	while ((*stack)->val != min)
		rra(stack, 1);
	pb(stack, stackb);
	min = find_min((*stack));
	while ((*stack)->val != min)
		rra(stack, 1);
	pb(stack, stackb);
	if (!is_sorted(*stackb))
		sb(stackb, 1);
	sort_three(stack);
	pa(stack, stackb);
	pa(stack, stackb);
}

void	sort_radix(t_stack **stack_a, t_stack **stack_b)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;
	int	num;

	size = stack_size(*stack_a);
	max_bits = find_max_bits(size);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			num = (*stack_a)->index;
			if (((num >> i) & 1) == 1)
				ra(stack_a, 1);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		i++;
	}
}
