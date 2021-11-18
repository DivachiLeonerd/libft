/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:51:08 by atereso-          #+#    #+#             */
/*   Updated: 2021/11/16 18:57:31 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if ((int)*s == c)
			return ((char *)s);
		else
			s--;
	}
	return (NULL);
}
