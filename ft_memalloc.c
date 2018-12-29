/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschulle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 17:51:38 by cschulle          #+#    #+#             */
/*   Updated: 2018/12/22 19:55:07 by cschulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	while (i <= size)
	{
		ft_memset(ptr + i, 0, size);
		i++;
	}
	return (ptr);
}