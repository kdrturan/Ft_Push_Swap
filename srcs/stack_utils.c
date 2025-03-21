/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:37:44 by abturan           #+#    #+#             */
/*   Updated: 2025/03/05 15:37:45 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int val)
{
	t_stack	*new_stack;

	new_stack = malloc(sizeof(t_stack));
	if (!new_stack)
		return (NULL);
	new_stack->val = val;
	new_stack->next = NULL;
	return (new_stack);
}

t_stack	*stacklast(t_stack *stack)
{
	t_stack	*l_ptr;

	if (!stack)
		return (NULL);
	l_ptr = stack;
	while (l_ptr->next != NULL)
		l_ptr = l_ptr->next;
	return (l_ptr);
}

void	stack_add_back(t_stack **stack, t_stack *new)
{
	t_stack	*l_ptr;

	if (!stack || !(*stack))
	{
		new->index = -1;
		*stack = new;
		return ;
	}
	l_ptr = stacklast(*stack);
	l_ptr->next = new;
	new->index = -1;
}

void	stack_add_front(t_stack **stack, t_stack *new)
{
	new->next = *stack;
	*stack = new;
}

int	stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}
