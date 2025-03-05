#include "push_swap.h"



int is_sorted(t_stack** stack)
{
	t_stack* tmp;

	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->val > tmp->next->val)
		{
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);	
	
}


void sort_three(t_stack** stack)
{
	while (is_sorted(stack))
	{
		if ((*stack)->val > (*stack)->next->val)
			sa(stack,1);
		else if ((*stack)->next->val > (*stack)->next->next->val)
			rra(stack,1);		
	}
}

void	sort_four(t_stack** stack,t_stack** stackb)
{
	t_stack* mnode;
	t_stack* tmp;

	tmp = (*stack);
	mnode = tmp;
	while (tmp->next)
	{
		if (tmp->val > tmp->next->val)
		{
			mnode = tmp->next;
		}
		tmp = tmp->next;
	}
	while ((*stack)->val != mnode->val)
		ra(stack,1);
	pb(stack,stackb);
	sort_three(stack);
	pa(stack,stackb);
}

int find_min(t_stack *stack)
{
	int min;
	
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

void	sort_five(t_stack** stack,t_stack** stackb)
{
	int min;
	if(!is_sorted(stack))
		return;
	min = find_min((*stack));
	while ((*stack)->val != min)
		rra(stack,1);
	pb(stack,stackb);
	min = find_min((*stack));
	while ((*stack)->val != min)
		rra(stack,1);
	pb(stack,stackb);
	if(!is_sorted(stackb))
		sb(stackb,1);
	sort_three(stack);
	pa(stack,stackb);
	pa(stack,stackb);
}


void	set_index(t_stack** stack)
{
	t_stack* min;
	t_stack* temp;
	int	i;
	int	size;

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



int	max_bit(int size)
{
	int i;

	i = 7; 
	while (i > 0)
	{
		if (size & (1 << i))
			break;
		i--;
	}
	return (i);
}


void sort_radix(t_stack** stack,t_stack** stackb)
{
	t_stack* tmpa;
	int 	max;

	tmpa = (*stack);
	max = max_bit(stack_size(tmpa));
	while (tmpa->next)
	{
		
	}
	

}