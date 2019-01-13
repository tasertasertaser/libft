/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschulle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 15:37:25 by cschulle          #+#    #+#             */
/*   Updated: 2019/01/13 15:44:19 by cschulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, char c)
{
	char	*fresh;
	size_t	i;
	size_t	len;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	i = (ft_strlen(s1));
	len2 = 0;
	while (s2 && s2[len2] != c)
		len2++;
	len = i + len2 + 1;
	if (!(fresh = (char *)malloc(len + 1)))
		return (NULL);
	ft_strcpy(fresh, s1);
	ft_strncpy(&fresh[i], s2, len2);
	fresh[len] = '\0';
	return (fresh);
}