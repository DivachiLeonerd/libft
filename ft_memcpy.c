/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:53:08 by atereso-          #+#    #+#             */
/*   Updated: 2021/11/16 20:12:35 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char	*dest0;
	char	*src0;

	dest0 = (char *)dest;
	src0 = (char *)src;
	while (dest0 && n && src0)
	{
		*dest0 = *src0;
		dest0++;
		src0++;
		n--;
	}
	return (dest);
}
