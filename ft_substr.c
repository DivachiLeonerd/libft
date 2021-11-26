/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:25:39 by atereso-          #+#    #+#             */
/*   Updated: 2021/11/25 17:08:06 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:38:26 by afonso            #+#    #+#             */
/*   Updated: 2021/10/29 19:09:48 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*alloc;

	i = 0;
	alloc = malloc(len * sizeof(char));
	if (!alloc)
	{
		return (NULL);
	}
	while (*s)
	{
		alloc[i] = *s;
		s++;
		i++;
	}
	return (alloc);
}
