/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:33:06 by abturan           #+#    #+#             */
/*   Updated: 2024/10/22 14:43:02 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_determiner(const char **str, va_list args, int *counter);
int		ft_printf(const char *str, ...);
int		ft_puthex(unsigned int number);
int		ft_putadress(unsigned long number);
int		ft_puthex_upper(unsigned int number);
int		ft_putstr(char *s);
int		ft_put_u_number(unsigned int n);
int		ft_putnumber(int n);
int		ft_putchar(int c);

#endif