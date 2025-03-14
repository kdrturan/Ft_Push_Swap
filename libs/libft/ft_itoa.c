/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:29:42 by abturan           #+#    #+#             */
/*   Updated: 2024/10/12 16:29:42 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_sizeof_int(long num)
{
	size_t	counter;

	counter = 0;
	if (!num)
		return (1);
	else if (num < 0)
	{
		num = -num;
		counter++;
	}
	while (num > 0)
	{
		counter++;
		num /= 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	size_t	size;
	size_t	i;
	char	*str;
	long	num;

	i = 0;
	num = (long)n;
	size = ft_sizeof_int(num);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	if (!num)
		str[0] = '0';
	if (num < 0)
	{
		num = -num;
		str[0] = '-';
	}
	while (num > 0)
	{
		str[size - 1 - i++] = num % 10 + 48;
		num /= 10;
	}
	str[size] = '\0';
	return (str);
}
