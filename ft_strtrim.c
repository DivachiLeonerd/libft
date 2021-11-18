/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:54:17 by afonso            #+#    #+#             */
/*   Updated: 2021/11/16 18:57:36 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	char	*find_lastmark(char const *s1, char const *set,
					char *first_marker);

static	char	*alloc_new_array(char *first_marker, char	*last_marker);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*first_marker;
	char	*alloc;

	j = 0;
	i = 0;
	while (set[j] && s1[i])
	{
		if (s1[i++] == set[j])
			j = 0;
		j++;
	}
	j = 0;
	first_marker = (char *)&s1[i];
	i = 0;
	alloc = alloc_new_array(first_marker, find_lastmark(s1, set, first_marker));
	while (first_marker <= find_lastmark(s1, set, first_marker))
	{
		alloc[i++] = *first_marker;
		first_marker++;
	}
	return (alloc);
}

static	char	*find_lastmark(char const *s1, char const *set,
	char	*first_marker)
{
	int		i;
	int		j;
	char	*last_marker;

	j = 0;
	i = 0;
	while (s1[i])
	{
		i++;
	}
	while (set[j] && i >= 0)
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		j++;
	}
	j = 0;
	last_marker = (char *)&s1[i];
	return (last_marker);
}

static	char	*alloc_new_array(char *first_marker, char	*last_marker)
{
	char	*alloc;

	alloc = malloc((last_marker - first_marker + 1) * sizeof(char));
	if (!alloc)
		return (NULL);
	return (alloc);
}
