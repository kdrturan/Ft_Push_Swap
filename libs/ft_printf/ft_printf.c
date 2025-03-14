/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:21:39 by abturan           #+#    #+#             */
/*   Updated: 2024/10/22 14:42:33 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_determiner(const char **str, va_list args, int *counter)
{
	if (**str == 'c')
		*counter += ft_putchar(va_arg(args, int));
	else if (**str == 's')
		*counter += ft_putstr(va_arg(args, char *));
	else if (**str == 'p')
		*counter += ft_putadress(va_arg(args, unsigned long));
	else if (**str == 'd')
		*counter += ft_putnumber(va_arg(args, int));
	else if (**str == 'i')
		*counter += ft_putnumber(va_arg(args, int));
	else if (**str == 'u')
		*counter += ft_put_u_number(va_arg(args, unsigned int));
	else if (**str == 'x')
		*counter += ft_puthex(va_arg(args, unsigned int));
	else if (**str == 'X')
		*counter += ft_puthex_upper(va_arg(args, unsigned int));
	else if (**str == '%')
	{
		*counter += ft_putchar('%');
	}
}

int	ft_printf(const char *str, ...)
{
	int		counter;
	va_list	args;

	va_start(args, str);
	counter = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_determiner(&str, args, &counter);
		}
		else
			counter += ft_putchar(*str);
		str++;
	}
	return (counter);
}
