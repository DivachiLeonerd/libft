/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:51:08 by atereso-          #+#    #+#             */
/*   Updated: 2021/10/28 16:51:43 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (*s == (char *)c)
			return (s);
		else
			s--;
	}
	return (NULL);
}
