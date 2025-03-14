/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:37:39 by abturan           #+#    #+#             */
/*   Updated: 2025/03/05 17:47:19 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	terminate_prog(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	dupcontrol(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *stack;
	while (tmp->next)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp2->val == tmp->val)
			{
				stack_free(stack);
				terminate_prog();
			}
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

t_stack	*ps_parse(int ac, char **args)
{
	t_stack	*rtn;
	char	**values;
	int		i;
	int		arg;

	arg = 1;
	rtn = NULL;
	while (arg < ac)
	{
		i = 0;
		values = ft_split(args[arg], ' ');
		while (values[i])
		{
			stack_add_back(&rtn, stack_new(ft_atoi(values[i])));
			free(values[i]);
			i++;
		}
		free (values);
		arg++;
	}
	return (rtn);
}
