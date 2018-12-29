/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschulle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 22:58:35 by cschulle          #+#    #+#             */
/*   Updated: 2018/12/22 15:54:56 by cschulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strequ(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if ((!s1 || !*s1) && (!s2 || !*s2))
		return (1);
	while (s1[i] == s2[i] && (s1[i] && s2[i]))
		i++;
	if (((unsigned char)s1[i] - (unsigned char)s2[i]) == 0)
		return (1);
	else
		return (0);
}
