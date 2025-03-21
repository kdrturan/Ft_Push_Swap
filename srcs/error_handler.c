/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrturan <kdrturan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:37:22 by abturan           #+#    #+#             */
/*   Updated: 2025/03/14 23:35:12 by kdrturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (str[0] == '-' || str[0] == '+')
	{
		i++;
	}
	if (!ft_isdigit(str[i]))
	{
		return (0);
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

long	ft_atol(const char *str)
{
	long	result;
	int		sign;
	int		i;

	i = 0;
	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
		i++;
	}
	return (result * sign);
}

int	is_int_range(char *str)
{
	long	num;

	num = ft_atol(str);
	if (num > INT_MAX || num < INT_MIN)
		return (0);
	return (1);
}

void	cleaner(char **values,int i)
{

	if (values)
	{
		while (values[i])
			free(values[i++]);
		free(values);
	}
	terminate_prog();
}

void	check_errors(int ac, char **args)
{
	int		i;
	int		arg;
	char	**values;

	arg = 1;
	if (ac < 2)
		exit(EXIT_FAILURE);
	while (arg < ac)
	{
		i = 0;
		values = ft_split(args[arg], ' ');
		if (!values || !values[i])
			cleaner(values,i);
		while (values[i])
		{
			if (!values[i] || !is_numeric(values[i])
				|| !is_int_range(values[i]) || ft_strlen(values[i]) > 11)
				cleaner(values,i);
			free(values[i]);
			i++;
		}
		free(values);
		arg++;
	}
}
