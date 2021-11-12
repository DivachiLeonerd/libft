/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:50:59 by atereso-          #+#    #+#             */
/*   Updated: 2021/11/12 12:18:47 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	int	i;

	i = 0;
	if (!*needle)
	{
		return ((char *)haystack);
	}
	while (*haystack && len > 0)
	{
		if (*haystack != needle[i])
		{
			i = 0;
			haystack++;
		}
		if (*haystack == needle[i])
		{
			haystack++;
			i++;
			if (!needle[i])
			{
				return ((char *)needle);
			}
		}
	}
	return (NULL);
}
