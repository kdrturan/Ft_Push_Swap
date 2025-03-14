/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:39:47 by abturan           #+#    #+#             */
/*   Updated: 2025/03/05 16:28:05 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdarg.h>
# include "libft.h"
# include "ft_printf.h"

typedef struct s_stack
{
	int				val;
	int				index;
	struct s_stack	*next;
}					t_stack;

void	sa(t_stack **stack, int msg);
void	sb(t_stack **stack, int msg);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack, int msg);
void	rb(t_stack **stack, int msg);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack, int msg);
void	rrb(t_stack **stack, int msg);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	dupcontrol(t_stack **stack);
t_stack	*ps_parse(int ac, char **args);
t_stack	*stack_new(int val);
t_stack	*stacklast(t_stack *stack);
void	stack_add_back(t_stack **stack, t_stack *new);
void	stack_add_front(t_stack **stack, t_stack *new);
int		stack_size(t_stack *stack);
t_stack	*stack_pop(t_stack **stack);
void	stack_free(t_stack **stack);
int		is_sorted(t_stack *stack);
int		find_min(t_stack *stack);
int		find_max_bits(int size);
void	sort_three(t_stack **stack);
void	sort_four(t_stack **stack, t_stack **stackb);
void	sort_five(t_stack **stack, t_stack **stackb);
void	sort_radix(t_stack **stack_a, t_stack **stack_b);
void	set_index(t_stack **stack);
void	check_errors(int ac, char **args);
int		is_numeric(char *str);
void	terminate_prog(void);
#endif