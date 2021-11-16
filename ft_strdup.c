/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:56:05 by atereso-          #+#    #+#             */
/*   Updated: 2021/11/16 18:56:55 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*alloc;

	i = 0;
	while (s1[i])
	{
		i++;
	}
	alloc = malloc (i * sizeof(char) + 1);
	if (!alloc)
		return (NULL);
	else
		return (alloc);
}
