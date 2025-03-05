/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_utils_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:46:26 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 14:24:34 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_isflag_pf(char c)
{
	if (c == '-' || c == '0' || c == '.' || c == '#' || c == ' ' || c == '+')
		return (c);
	return (0);
}

void	ft_passflag_pf(char **sptr)
{
	char	c;

	c = ft_isflag_pf(**sptr);
	while (**sptr == c)
		(*sptr)++;
}

char	ft_isvalidtype_pf(char c)
{
	if (c == 'c' || c == 's' || c == 'p'
		|| c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%')
		return (c);
	return (0);
}
