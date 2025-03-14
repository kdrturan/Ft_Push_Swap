/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:21:42 by abturan           #+#    #+#             */
/*   Updated: 2024/10/22 14:44:39 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_puthex_upper(unsigned int number)
{
	char	*hex;
	int		counter;

	hex = "0123456789ABCDEF";
	counter = 0;
	if (number > 15)
	{
		counter += ft_puthex_upper(number / 16);
		counter += ft_putchar(hex[number % 16]);
	}
	else
	{
		counter += ft_putchar(hex[number % 16]);
	}
	return (counter);
}

int	ft_putadress(unsigned long number)
{
	char	*hex;
	int		counter;

	hex = "0123456789abcdef";
	counter = 0;
	if (number > 15)
	{
		counter += ft_putadress(number / 16);
		counter += ft_putchar(hex[number % 16]);
	}
	else
	{
		counter += ft_putstr("0x");
		counter += ft_putchar(hex[number % 16]);
	}
	return (counter);
}

int	ft_puthex(unsigned int number)
{
	char	*hex;
	int		counter;

	hex = "0123456789abcdef";
	counter = 0;
	if (number > 15)
	{
		counter += ft_puthex(number / 16);
		counter += ft_putchar(hex[number % 16]);
	}
	else
	{
		counter += ft_putchar(hex[number % 16]);
	}
	return (counter);
}
