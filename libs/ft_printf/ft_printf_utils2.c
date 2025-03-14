/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:40:25 by abturan           #+#    #+#             */
/*   Updated: 2024/10/22 14:41:00 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnumber(int n)
{
	int	counter;

	counter = 0;
	if (n == -2147483648)
	{
		counter += write(1, "-2147483648", 11);
		return (counter);
	}
	if (n < 0)
	{
		counter += ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		counter += ft_putnumber(n / 10);
		counter += ft_putchar(((n % 10) + 48));
	}
	else
		counter += ft_putchar((n % 10) + 48);
	return (counter);
}

int	ft_put_u_number(unsigned int n)
{
	int	counter;

	counter = 0;
	if (n > 9)
	{
		counter += ft_put_u_number(n / 10);
		counter += ft_putchar(((n % 10) + 48));
	}
	else
		counter += ft_putchar((n % 10) + 48);
	return (counter);
}
