/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:44:14 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 14:18:07 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_digitlen_pf(long val)
{
	int	count;

	count = 0;
	if (val == 0)
		return (1);
	if (val < 0)
	{
		val = -val;
		count++;
	}
	while (val > 0)
	{
		val /= 10;
		count++;
	}
	return (count);
}
