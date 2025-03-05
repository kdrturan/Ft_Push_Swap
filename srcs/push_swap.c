/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrturan <kdrturan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:34:06 by tuaydin           #+#    #+#             */
/*   Updated: 2025/03/04 17:14:02 by kdrturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char *args[])
{
	t_stack *a;
	t_stack *b;
	t_stack	*tmp;
	
	a = ps_parse(ac, args);
	b = NULL;

	ft_printf("--------A--------\n");
	tmp = a;
	if (tmp)
		for (int i = 0; i < stack_size(a); i++)
		{
			ft_printf("%d %d\n",i, tmp->val);
			tmp = tmp->next;
		}

	int c = is_sorted(&a);
	ft_printf("Is Sorted: %d\n",c);
	sort_five(&a,&b);
	c = is_sorted(&a);
	ft_printf("Is Sorted: %d\n",c);
	tmp = a;
	if (tmp)
		for (int i = 0; i < stack_size(a); i++)
		{
			ft_printf("%d %d\n",i, tmp->val);
			tmp = tmp->next;
		}
	stack_free(&a);
}