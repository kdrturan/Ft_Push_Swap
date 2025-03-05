/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_utils10_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:45:40 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 14:32:20 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdigit_zero_plus(t_fdata p_data, long val)
{
	int	ff;
	int	fs;

	ff = p_data.ff_val;
	fs = p_data.sf_val;
	if (ff > fs)
	{
		if (fs < ft_digitlen_pf(val))
			return (ft_putdigit_zero_plus_utils0(p_data, val));
		else
			return (ft_putdigit_zero_plus_utils1(p_data, val));
	}
	else if (!ff && !fs)
		return (ft_putdigit_zero_plus_utils2(p_data, val));
	else if (ff <= fs)
	{
		if (fs >= ft_digitlen_pf(val))
			return (ft_putdigit_zero_plus_utils3(p_data, val));
		else
			return (ft_putdigit_zero_plus_utils4(p_data, val));
	}
	return (0);
}

int	ft_putdigit_plus_dot(t_fdata p_data, long val)
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
			ft_putdigit_plus_dot_util0(p_data, val);
		else
			ft_putdigit_plus_dot_util1(p_data, val);
	}
	else if (!ff && !fs)
		ft_putdigit_plus_dot_util0(p_data, val);
	else if (ff <= fs)
	{
		if (fs >= ft_digitlen_pf(val) + is_minus)
			ft_putdigit_plus_dot_util2(p_data, val);
		else
			ft_putdigit_plus_dot_util3(p_data, val);
	}
	return (0);
}
