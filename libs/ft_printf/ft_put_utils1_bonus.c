/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_utils1_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:13:01 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 14:24:17 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_minus(t_fdata p_data, unsigned long val)
{
	int	count;
	int	temp;

	count = 0;
	count += ft_putptr_pf(val);
	temp = count;
	while (p_data.ff_val > temp)
	{
		count += ft_putchar_pf(' ');
		p_data.ff_val--;
	}
	return (count);
}

int	ft_putdigit_minus(t_fdata p_data, long val)
{
	int	count;
	int	temp;

	count = 0;
	count += ft_putdigit_pf(val);
	temp = count;
	while (p_data.ff_val > temp)
	{
		count += ft_putchar_pf(' ');
		p_data.ff_val--;
	}
	return (count);
}

int	ft_puthex_minus(t_fdata p_data, unsigned long val, int is_upper)
{
	int	count;
	int	temp;

	count = 0;
	if (is_upper)
		count += ft_puthex_pf(val, is_upper);
	else
		count += ft_puthex_pf(val, is_upper);
	temp = count;
	while (p_data.ff_val > temp)
	{
		count += ft_putchar_pf(' ');
		p_data.ff_val--;
	}
	return (count);
}

int	ft_putdigit_zero(t_fdata p_data, long val)
{
	int	count;

	count = 0;
	if (val < 0)
	{
		val = -val;
		count += ft_putchar_pf('-');
		p_data.ff_val--;
	}
	while (p_data.ff_val > ft_digitlen_pf(val))
	{
		count += ft_putchar_pf('0');
		p_data.ff_val--;
	}
	count += ft_putdigit_pf(val);
	return (count);
}
