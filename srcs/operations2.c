/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:23:14 by tuaydin           #+#    #+#             */
/*   Updated: 2024/12/21 20:03:16 by tuaydin          ###   ########.fr       */
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
