/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:19:32 by atereso-          #+#    #+#             */
/*   Updated: 2021/11/10 18:13:07 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*s0;

	s0 = (unsigned char *)s;
	while (*s0 && n > 0)
	{
		if (*s0 == (unsigned char)c)
			return ((void *)s);
		else
			s0++;
	}
	return (NULL);
}
