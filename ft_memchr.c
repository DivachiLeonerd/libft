/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:19:32 by atereso-          #+#    #+#             */
/*   Updated: 2021/11/26 16:43:56 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_too_big(int c)
{
	if (c > 256)
		return (c - 256);
	else
		return (c);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*array;

	array = (unsigned char *)s;
	i = 0;
	if (!s || !n)
		return (NULL);
	c = is_too_big(c);
	while ((array [i] != (unsigned char)c) && n > i)
		i++;
	if (array[i] == c)
		return (&(array[i]));
	return (NULL);
}
