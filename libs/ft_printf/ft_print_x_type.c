/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x_type.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:44:20 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 14:21:04 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x_type(t_fdata p_data, unsigned long val, int is_upper)
{
	if (p_data.f_flag == 0 && p_data.s_flag == 0 && is_upper == 0)
		return (ft_puthex_pf(val, is_upper));
	if (p_data.f_flag == 0 && p_data.s_flag == 0 && is_upper == 1)
		return (ft_puthex_pf(val, is_upper));
	if (p_data.f_flag == '-' && p_data.s_flag == 0)
		return (ft_puthex_minus(p_data, val, is_upper));
	if (p_data.f_flag == 'w' && p_data.s_flag == 0)
		return (ft_puthex_width(p_data, val, is_upper));
	if ((p_data.f_flag == '0' || p_data.f_flag == '.') && p_data.s_flag == 0)
		return (ft_puthex_zero(p_data, val, is_upper));
	if (p_data.f_flag == '#' && p_data.s_flag == 0)
		return (ft_puthex_sharp(p_data, val, is_upper));
	if (p_data.f_flag == 'w' && p_data.s_flag == '.')
		return (ft_puthex_width_dot(p_data, val, is_upper));
	if (p_data.f_flag == '-' && p_data.s_flag == '.')
		return (ft_puthex_minus_dot(p_data, val, is_upper));
	if (p_data.f_flag == '0' && p_data.s_flag == '.')
		return (ft_puthex_zero_dot(p_data, val, is_upper));
	if (p_data.f_flag == '.' && p_data.s_flag == '0')
		return (ft_puthex_dot_zero(p_data, val, is_upper));
	return (ft_puthex_pf(val, is_upper));
}
