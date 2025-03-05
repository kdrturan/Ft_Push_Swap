/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c_type.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:05:47 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 14:20:15 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c_type(t_fdata p_data, char c)
{
	if ((p_data.f_flag == 0 || p_data.f_flag == '.') && p_data.s_flag == 0)
		return (ft_putchar_pf(c));
	if (p_data.f_flag == '-' && p_data.s_flag == 0)
		return (ft_putchar_minus(p_data, c));
	if (p_data.f_flag == 'w' && (p_data.s_flag == 0 || p_data.s_flag == '.'))
		return (ft_putchar_width(p_data, c));
	return (ft_putchar_pf(c));
}
