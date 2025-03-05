/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di_type.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:20:01 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 14:20:26 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_di_type1(t_fdata p_data, long val)
{
	if (p_data.f_flag == '-' && p_data.s_flag == '.')
		return (ft_putdigit_minus_dot(p_data, val));
	if (p_data.f_flag == '.' && p_data.s_flag == '0')
		return (ft_putdigit_dot_zero(p_data, val));
	if (p_data.f_flag == '+' && p_data.s_flag == '.')
		return (ft_putdigit_plus_dot(p_data, val));
	if (p_data.f_flag == ' ' && p_data.s_flag == '.')
		return (ft_putdigit_space_dot(p_data, val));
	if (p_data.f_flag == '0' && p_data.s_flag == '+')
		return (ft_putdigit_zero_plus(p_data, val));
	if (p_data.f_flag == '-' && p_data.s_flag == '#')
		return (ft_putdigit_minus_sharp(p_data, val));
	return (ft_putdigit_pf(val));
}

int	ft_print_di_type(t_fdata p_data, long val)
{
	if (p_data.f_flag == 0 && p_data.s_flag == 0)
		return (ft_putdigit_pf(val));
	if ((p_data.f_flag == '-') && p_data.s_flag == 0)
		return (ft_putdigit_minus(p_data, val));
	if (p_data.f_flag == '0' && p_data.s_flag == 0)
		return (ft_putdigit_zero(p_data, val));
	if (p_data.f_flag == '.' && p_data.s_flag == 0)
		return (ft_putdigit_dot(p_data, val));
	if (p_data.f_flag == ' ' && p_data.s_flag == 0)
		return (ft_putdigit_space(p_data, val));
	if (p_data.f_flag == '+' && p_data.s_flag == 0)
		return (ft_putdigit_plus(p_data, val));
	if ((p_data.f_flag == 'w' || p_data.f_flag == '#') && p_data.s_flag == 0)
		return (ft_putdigit_width(p_data, val));
	if ((p_data.f_flag == 'w' || p_data.f_flag == '0') && p_data.s_flag == '.')
		return (ft_putdigit_width_dot(p_data, val));
	return (ft_print_di_type1(p_data, val));
}
