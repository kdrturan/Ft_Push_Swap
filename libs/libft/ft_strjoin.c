/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:22:46 by abturan           #+#    #+#             */
/*   Updated: 2024/10/12 15:38:01 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*strjoin;

	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	strjoin = (char *)malloc(s1_len + s2_len + 1);
	if (!strjoin)
	{
		return (NULL);
	}
	while (i < s1_len)
	{
		strjoin[i] = ((char *)s1)[i];
		i++;
	}
	while (i < (s1_len + s2_len))
	{
		strjoin[i] = ((char *)s2)[i - s1_len];
		i++;
	}
	strjoin[i] = '\0';
	return (strjoin);
}
