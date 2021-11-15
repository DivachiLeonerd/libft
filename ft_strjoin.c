/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:47:47 by afonso            #+#    #+#             */
/*   Updated: 2021/11/10 18:47:21 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*alloc;

	j = 0;
	i = 0;
	while (s1[i])
		i++;
	while (s2[i])
	{
		j++;
	}
	alloc = malloc((i + j - 1) * sizeof(char));
	if (!alloc)
	{
		return (NULL);
	}
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
