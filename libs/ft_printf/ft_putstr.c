/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:40:42 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 14:23:26 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(char *s)
{
	int	rtn;

	rtn = 0;
	if (!s)
		return (ft_putstr_pf("(null)"));
	while (*s)
	{
		rtn += ft_putchar_pf(*s);
		s++;
	}
	return (rtn);
}
