/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:49:48 by afonso            #+#    #+#             */
/*   Updated: 2021/12/13 13:49:51 by afonso           ###   ########.fr       */
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
