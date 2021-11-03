/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:16:20 by afonso            #+#    #+#             */
/*   Updated: 2021/11/03 19:26:58 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	**ft_split(char const *s, char c)
{
	int		i;
	int		string_count;
	int		stringnum;
	char	**split;

	stringnum = 0;
	i = 0;
	string_count = 0;
	while (s[i])
	{
		if (s[i] == c)
			stringnum++;
		i++;
	}
	stringnum++;
	split = malloc((stringnum) * sizeof(char *));
	while (stringnum > string_count)
	{
		alloc_string(s, c, split, string_count);
		string_count++;
	}
}

static char	*alloc_string(char const *s, char c,
			char	**split, int index)
{
	int		i;
	char	*string;

	i = 0;
	while (s[i] && *s != c)
	{
		i++;
	}
	i++;
	split[index] = malloc(i * sizeof(char));
	if (!split[index])
	{
		return (NULL);
	}
	return (split[index]);
}
