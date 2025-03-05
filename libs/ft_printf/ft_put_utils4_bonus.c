/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_utils4_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:47:50 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 15:02:33 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_width_dot(t_fdata p_data, char *str)
{
	int	count;

	count = 0;
	if (p_data.sf_val > ft_strlen_pf(str))
		p_data.sf_val = ft_strlen_pf(str);
	while (p_data.ff_val > p_data.sf_val)
	{
		count += ft_putchar_pf(' ');
		p_data.ff_val--;
	}
	count += ft_putnstr_pf(str, p_data.sf_val);
	return (count);
}

int	ft_putnstr_pf(char *s, int val)
{
	int	rtn;

	rtn = 0;
	if (!s)
		return (ft_putnull_pf(val));
	while (*s && val)
	{
		rtn += ft_putchar_pf(*s);
		s++;
		val--;
	}
	return (rtn);
}

int	ft_putstr_minus_dot(t_fdata p_data, char *str)
{
	int	count;

	count = 0;
	if (p_data.sf_val > ft_strlen_pf(str))
		p_data.sf_val = ft_strlen_pf(str);
	count += ft_putnstr_pf(str, p_data.sf_val);
	while (p_data.ff_val > p_data.sf_val)
	{
		count += ft_putchar_pf(' ');
		p_data.ff_val--;
	}
	return (count);
}

int	ft_putnull_pf(int val)
{
	int					count;
	static const char	*null;

	null = "(null)";
	count = 0;
	while (count < val && count < 6)
		count += ft_putchar_pf(null[count]);
	return (count);
}

int	ft_putdigit_width(t_fdata p_data, long val)
{
	int	count;

	count = 0;
	while (p_data.ff_val > ft_digitlen_pf(val))
	{
		count += ft_putchar_pf(' ');
		p_data.ff_val--;
	}
	count += ft_putdigit_pf(val);
	return (count);
}
