/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:17:04 by atereso-          #+#    #+#             */
/*   Updated: 2021/10/28 16:17:42 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*calloc(unsigned int count, unsigned int size)
{
	char	*allocator;
	int		i;

	i = 0;
	allocator = malloc(count * size);
	if (!allocator)
		return (NULL);
	while (i < (count * size))
	{
		allocator[i] = 0;
		i++;
	}
	return ((void *)allocator);
}
