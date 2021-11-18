/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:49:57 by atereso-          #+#    #+#             */
/*   Updated: 2021/10/28 16:50:41 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int dstsize)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	while (*dst && *src && (dstsize - 1))
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = '\0';
	return (i);
}
