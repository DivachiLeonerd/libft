/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:16:20 by afonso            #+#    #+#             */
/*   Updated: 2021/11/01 13:23:12 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	**ft_split(char const *s, char c)
{
	unsigned int		counter;
	unsigned int		i;
	char				*alloc;
	char	pointer;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			counter++;
		}
		i++;
	}
	alloc = malloc((i - counter + 1) * sizeof(char));
	if (!alloc)
		return (NULL);
		counter = 0;
	while (s[i])
	{
		while (s[i] != c)
		{
		alloc[counter] = s[i];
		counter++;
		i++;
		}
		if (s[i] == c)
		{
			i++;
		}
	}
	alloc[counter] == '\0';
	pointer = alloc;
	free(alloc);
	return (pointer);
}
