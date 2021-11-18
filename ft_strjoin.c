/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:47:47 by afonso            #+#    #+#             */
/*   Updated: 2021/11/16 19:17:24 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	int	find_mallocsize(int i, int j, char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*alloc;

	j = 0;
	i = 0;
	alloc = malloc((find_mallocsize(i, j, s1, s2)) * sizeof(char));
	if (!alloc)
		return (NULL);
	i = 0;
	j = 0;
	while (s2[j - 1])
	{
		while (s1[i])
		{
			alloc[i] = s1[i];
			i++;
		}
		alloc[i] = s2[j];
		i++;
		j++;
	}
	return (alloc);
}

static	int	find_mallocsize(int i, int j, char const *s1, char const *s2)
{
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	return (i + j - 1);
}
