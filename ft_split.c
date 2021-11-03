/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:16:20 by afonso            #+#    #+#             */
/*   Updated: 2021/11/02 16:19:03 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	**ft_split(char const *s, char c)
{
	int	i;
	int	string_count;
	int	stringnum;
	char	**split;
	char	**final_array;

	stringnum = 0;
	i = 0;
	string_count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			stringnum++;
		}
		i++;
	}
	stringnum++;//numero de splits mais 1
	split = malloc((i + 1) * sizeof(char));// i + 1 because of being an index
	if (!split)
	{
		return (NULL);
	}
	while (string_count < stringnum && *s)
	{
		put_string(s, c, split, string_count);
		string_count++;
		if (*put_string(s, c, split, string_count) == '\0')
		{
			string_count++;
		}
	}
	final_array = split;
	free(split);
}
static char *put_string(char const *s, char c, char **split, int split_index)
{
	int		size;
	char	*string;

	size = 0;
	while (*s != c && *s)
	{
		string[size] = *s;
		size++;
		s++;
	}
	string[size] = '\0';
	if (*s != '\0')
	{
		s++;
	}
	split[split_index] = string;
	return (s);
}
