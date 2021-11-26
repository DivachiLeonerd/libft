/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:17:04 by atereso-          #+#    #+#             */
/*   Updated: 2021/11/25 16:57:06 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
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
