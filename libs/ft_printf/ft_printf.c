/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:49:50 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 15:01:07 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_do_print(va_list *args, t_fdata print_data)
{
	if (print_data.v_type == 'c')
		return (ft_print_c_type(print_data, va_arg(*args, int)));
	if (print_data.v_type == 's')
		return (ft_print_s_type(print_data, va_arg(*args, char *)));
	if (print_data.v_type == 'p')
		return (ft_print_p_type(print_data, va_arg(*args, unsigned long)));
	if (print_data.v_type == 'd' || print_data.v_type == 'i')
		return (ft_print_di_type(print_data, (long)va_arg(*args, int)));
	if (print_data.v_type == 'u')
		return (ft_print_u_type(print_data, va_arg(*args, unsigned int)));
	if (print_data.v_type == 'x')
		return (ft_print_x_type(print_data, va_arg(*args, unsigned int), 0));
	if (print_data.v_type == 'X')
		return (ft_print_x_type(print_data, va_arg(*args, unsigned int), 1));
	if (print_data.v_type == '%')
		return (ft_print_percent_type(print_data));
	return (0);
}

static int	ft_define_flags(va_list *args, char **sptr)
{
	t_fdata	print_data;

	(*sptr)++;
	if (**sptr >= '1' && **sptr <= '9')
	{
		print_data.f_flag = 'w';
		print_data.ff_val = ft_uatoi_pf(sptr);
		print_data.s_flag = ft_isflag_pf(**sptr);
		ft_passflag_pf(sptr);
		print_data.sf_val = ft_uatoi_pf(sptr);
		print_data.v_type = ft_isvalidtype_pf(**sptr);
		return (ft_do_print(args, print_data));
	}
	print_data.f_flag = ft_isflag_pf(**sptr);
	ft_passflag_pf(sptr);
	if (ft_uatoi1_pf(*sptr) != 0)
		print_data.ff_val = ft_uatoi_pf(sptr);
	else
		print_data.ff_val = 0;
	print_data.s_flag = ft_isflag_pf(**sptr);
	ft_passflag_pf(sptr);
	print_data.sf_val = ft_uatoi_pf(sptr);
	print_data.v_type = ft_isvalidtype_pf(**sptr);
	return (ft_do_print(args, print_data));
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, str);
	if (str)
	{
		while (*str)
		{
			if (*str != '%')
				count += ft_putchar_pf(*str);
			else if (*str == '%')
				count += ft_define_flags(&args, (char **)&str);
			str++;
		}
	}
	va_end(args);
	return (count);
}
