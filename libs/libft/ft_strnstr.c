/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:38:35 by abturan           #+#    #+#             */
/*   Updated: 2024/10/12 15:38:35 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	l_len;
	size_t	i;
	size_t	j;

	i = 0;
	l_len = ft_strlen(needle);
	if (l_len == 0)
		return ((char *)haystack);
	else if (len == 0)
		return (NULL);
	while (haystack[i] && i <= (len - l_len) && !(len < l_len))
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j])
			j++;
		if (j == l_len)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
