/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:38:26 by afonso            #+#    #+#             */
/*   Updated: 2021/10/29 19:09:48 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef unsigned int	t_size_t;
char	*ft_substr(char const *s, t_size_t start, t_size_t len)
{
	int	i;
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
