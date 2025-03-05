/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:42:42 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 14:23:05 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_pf(unsigned long val, int is_upper)
{
	int		i;
	char	*base;

	i = 0;
	if (is_upper == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (val >= 16)
		i += ft_puthex_pf(val / 16, is_upper);
	i += ft_putchar_pf(base[val % 16]);
	return (i);
}
