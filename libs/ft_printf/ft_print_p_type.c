/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p_type.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:21:36 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 14:20:56 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p_type(t_fdata p_data, unsigned long val)
{
	if (p_data.f_flag == 0 && p_data.s_flag == 0)
		return (ft_putptr_pf(val));
	if ((p_data.f_flag == '-') && p_data.s_flag == 0)
		return (ft_putptr_minus(p_data, val));
	if ((p_data.f_flag == 'w') && p_data.s_flag == 0)
		return (ft_putptr_width(p_data, val));
	if ((p_data.f_flag == '#') && p_data.s_flag == 0)
		return (ft_putptr_pf(val));
	if ((p_data.f_flag == ' ') && p_data.s_flag == 0)
		return (ft_putptr_width(p_data, val));
	return (ft_putptr_pf(val));
}
