/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:27:29 by atereso-          #+#    #+#             */
/*   Updated: 2021/11/30 16:45:09 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	i = ft_strlen(dst);
	if (dstsize <= (size_t)ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (src[j] && dstsize > i + 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}
/*
int	main(void)
{
	char	dest[30];
	char	src[10] = "AAAAAAAAA";

	memset(dest, '\0', 30);
	memset(dest, 'B', 4);
	printf("dest normal: %s\n", dest);
	ft_strlcat(dest, src, 6);
	printf("dest anormal: %s\n", dest);
	printf("return: %zu\n", ft_strlcat(dest, src, 6));
	memset(dest, '\0', 30);
	memset(dest, 'B', 4);
	printf("dest normal: %s\n", dest);
	strlcat(dest, src, 6);
	printf("dest anormal: %s\n", dest);
	printf("return: %zu\n", strlcat(dest, src, 6));
}*/
