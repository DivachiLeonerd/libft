/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*   Created: 2021/10/28 16:17:04 by atereso-          #+#    #+#             */
/*   Updated: 2021/12/21 13:17:07 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdint.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*allocator;
	size_t	i;
    int smaller_number;
    size_t   allocated_bytes;

	i = 0;
    if (count < size)
        smaller_number = count;
    else
        smaller_number = size;
    allocated_bytes = count * size;
    if (allocated_bytes > INT_MAX ||  (allocated_bytes < (size_t)smaller_number))
    {
        return (NULL);
    }
	allocator = malloc(allocated_bytes);
	if (!allocator)
		return (NULL);
	while (i < (allocated_bytes))
	{
		allocator[i] = 0;
		i++;
	}
	return ((void *)allocator);
}

