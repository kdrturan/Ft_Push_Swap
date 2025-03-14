/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:58:17 by abturan           #+#    #+#             */
/*   Updated: 2024/10/12 15:47:59 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	lenstr;
	char	*newstr;

	i = 0;
	lenstr = ft_strlen(s);
	newstr = (char *)malloc(lenstr + 1);
	if (!newstr)
		return (NULL);
	while (i < lenstr)
	{
		newstr[i] = f(i, ((char *)s)[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
