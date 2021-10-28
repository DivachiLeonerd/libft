/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:24:27 by atereso-          #+#    #+#             */
/*   Updated: 2021/10/28 16:24:36 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dst, const void *src, unsigned int len)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (dest && len && source)
	{
		*dest = *source;
		source++;
		dest++;
		len--;
	}
	return (dst);
}
