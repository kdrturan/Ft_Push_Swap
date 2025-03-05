/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:43:07 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 14:22:53 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdigit_pf(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count += ft_putchar_pf('-');
		count += ft_putdigit_pf(n);
	}
	else if (n > 9)
	{
		count += ft_putdigit_pf(n / 10);
		count += ft_putdigit_pf(n % 10);
	}
	else if (n <= 9)
		count += ft_putchar_pf(n + 48);
	return (count);
}
