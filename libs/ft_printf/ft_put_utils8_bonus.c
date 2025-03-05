/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_utils8_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:00:52 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 14:30:13 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdigit_space_dot(t_fdata p_data, long val)
{
	int	is_minus;
	int	ff;
	int	fs;

	ff = p_data.ff_val;
	fs = p_data.sf_val;
	is_minus = (val < 0);
	if (ff > fs)
	{
		if (fs < ft_digitlen_pf(val) + is_minus)
			return (ft_putdigit_space_dot_util0(p_data, val));
		else
			return (ft_putdigit_space_dot_util1(p_data, val));
	}
	else if (!ff && !fs)
		return (ft_putdigit_space_dot_util2(p_data, val));
	else if (ff <= fs)
	{
		if (fs >= ft_digitlen_pf(val) + is_minus)
			return (ft_putdigit_space_dot_util3(p_data, val));
		else
			return (ft_putdigit_space_dot_util4(p_data, val));
	}
	return (0);
}

int	ft_putdigit_minus_sharp(t_fdata p_data, long val)
{
	int	count;
	int	temp;

	count = 0;
	count += ft_putdigit_pf(val);
	temp = count;
	while (p_data.sf_val > temp)
	{
		count += ft_putchar_pf(' ');
		p_data.sf_val--;
	}
	return (count);
}
