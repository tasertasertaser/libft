/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschulle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 22:18:57 by cschulle          #+#    #+#             */
/*   Updated: 2018/12/22 19:46:01 by cschulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*buf;

	i = 0;
	if (&s[i] == NULL)
		return (NULL);
	buf = malloc(ft_strlen(s) + 1);
	if (!buf)
		return (NULL);
	while (s[i])
	{
		buf[i] = f(s[i]);
		i++;
	}
	buf[i] = '\0';
	return (buf);
}
