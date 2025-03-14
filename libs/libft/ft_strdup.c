/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:37:48 by abturan           #+#    #+#             */
/*   Updated: 2024/10/12 15:37:48 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p_strdup;
	size_t	i;
	size_t	size;

	size = ft_strlen(s1);
	p_strdup = (char *)malloc(size + 1);
	i = 0;
	if (!p_strdup)
		return (NULL);
	while (i < size)
	{
		p_strdup[i] = s1[i];
		i++;
	}
	p_strdup[size] = '\0';
	return (p_strdup);
}
