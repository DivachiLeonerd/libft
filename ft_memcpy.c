/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:53:08 by atereso-          #+#    #+#             */
/*   Updated: 2021/11/25 17:03:03 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest0;
	char	*src0;

	dest0 = (char *)dest;
	src0 = (char *)src;
	if (!dest && !src)
		return (0);
	while (dest0 && n && src0)
	{
		*dest0 = *src0;
		dest0++;
		src0++;
		n--;
	}
	return (dest);
}
