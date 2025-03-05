/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_utils2_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:53:14 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 23:01:21 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_zero(t_fdata p_data, unsigned long val, int is_upper)
{
	int	count;
	int	flag;

	flag = 0;
	count = 0;
	if (p_data.ff_val != 0)
		flag = 1;
	while (p_data.ff_val-- > ft_hexlen_pf(val))
		count += ft_putchar_pf('0');
	if (flag || val > 0)
	{
		if (is_upper)
			return (count + ft_puthex_pf(val, is_upper));
		else
			return (count + ft_puthex_pf(val, is_upper));
	}
	return (count);
}

int	ft_putstr_dot(t_fdata p_data, char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putnull_pf(p_data.ff_val));
	while (str[i] && i < p_data.ff_val)
	{
		ft_putchar_pf(str[i]);
		i++;
	}
	return (i);
}

int	ft_putdigit_dot(t_fdata p_data, long val)
{
	int	count;

	count = 0;
	if (val < 0)
	{
		val = -val;
		count += ft_putchar_pf('-');
	}
	while (p_data.ff_val > ft_digitlen_pf(val))
	{
		count += ft_putchar_pf('0');
		p_data.ff_val--;
	}
	if (p_data.ff_val != 0 || val > 0)
		count += ft_putdigit_pf(val);
	return (count);
}

int	ft_puthex_sharp(t_fdata p_data, unsigned long val, int is_upper)
{
	int		count;

	count = 0;
	if (val)
	{
		if (is_upper)
			count += ft_putstr_pf("0X");
		else
			count += ft_putstr_pf("0x");
	}
	count += ft_puthex_minus(p_data, val, is_upper);
	return (count);
}

int	ft_putdigit_space(t_fdata p_data, long val)
{
	int	count;
	int	is_minus;
	int	ff;

	ff = p_data.ff_val;
	count = 0;
	is_minus = (val < 0);
	if (is_minus)
		val = -val;
	if (p_data.ff_val <= ft_digitlen_pf(val))
		p_data.ff_val++;
	while (p_data.ff_val > ft_digitlen_pf(val) + is_minus)
	{
		count += ft_putchar_pf(' ');
		p_data.ff_val--;
	}
	if (is_minus)
		count += ft_putchar_pf('-');
	else if (ff < ft_digitlen_pf(val))
		count += ft_putchar_pf(' ');
	count += ft_putdigit_pf(val);
	return (count);
}
