/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:19:32 by atereso-          #+#    #+#             */
/*   Updated: 2021/10/28 16:23:31 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	char	*s0;

	s0 == (char *)s;
	while (*s0 && n > 0)
	{
		if (*s0 == (char *)c)
			return (s);
		else
			s++;
	}
	return (NULL);
}
