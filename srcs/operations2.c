/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:37:37 by abturan           #+#    #+#             */
/*   Updated: 2025/03/05 15:37:38 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **stack, int msg)
{
	t_stack	*last;
	t_stack	*temp;
	int		i;

	i = 0;
	if (stack == NULL || *stack == NULL)
		return ;
	if (stack_size(*stack) < 2)
		return ;
	temp = *stack;
	last = stacklast(*stack);
	while (i < stack_size(*stack) - 2)
	{
		temp = temp->next;
		i++;
	}
	temp->next = NULL;
	stack_add_front(stack, last);
	if (msg)
		ft_printf("rra\n");
}

void	rrb(t_stack **stack, int msg)
{
	t_stack	*last;
	t_stack	*temp;
	int		i;

	i = 0;
	if (stack == NULL || *stack == NULL)
		return ;
	if (stack_size(*stack) < 2)
		return ;
	temp = *stack;
	last = stacklast(*stack);
	while (i < stack_size(*stack) - 2)
	{
		temp = temp->next;
		i++;
	}
	temp->next = NULL;
	stack_add_front(stack, last);
	if (msg)
		ft_printf("rrb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	ft_printf("rrr\n");
}
