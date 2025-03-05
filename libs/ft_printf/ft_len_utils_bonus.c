/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_utils_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:59:21 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 14:18:21 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_hexlen_pf(unsigned long val)
{
	int	count;

	count = 0;
	if (val == 0)
		return (1);
	while (val > 0)
	{
		val /= 16;
		count++;
	}
	return (count);
}

int	ft_ptrlen_pf(unsigned long val)
{
	int	count;

	count = 0;
	if (val == 0)
		return (3);
	while (val > 0)
	{
		val /= 16;
		count++;
	}
	return (count + 2);
}
