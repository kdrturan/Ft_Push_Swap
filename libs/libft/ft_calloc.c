/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:34:52 by abturan           #+#    #+#             */
/*   Updated: 2024/10/12 15:34:52 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p_call;
	size_t	r_size;

	r_size = count * size;
	p_call = (void *)malloc(r_size);
	if (!p_call)
		return (NULL);
	ft_memset(p_call, 0, r_size);
	return (p_call);
}
