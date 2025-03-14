/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:37:47 by abturan           #+#    #+#             */
/*   Updated: 2025/03/05 16:05:49 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_pop(t_stack **stack)
{
	t_stack	*rtn;

	rtn = *stack;
	*stack = (*stack)->next;
	return (rtn);
}

void	stack_free(t_stack **stack)
{
	t_stack	*temp;

	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}

void	set_index(t_stack **stack)
{
	t_stack	*min;
	t_stack	*temp;
	int		i;
	int		size;

	i = 0;
	size = stack_size((*stack));
	while (i < size)
	{
		temp = *stack;
		min = NULL;
		while (temp)
		{
			if ((temp->index == -1) && (!min || temp->val < min->val))
				min = temp;
			temp = temp->next;
		}
		if (min)
			min->index = i;
		i++;
	}
}
