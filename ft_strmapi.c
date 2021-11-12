/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:12:07 by afonso            #+#    #+#             */
/*   Updated: 2021/11/12 12:01:56 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstring;

	i = 1;
	while (s[i])
	{
		i++;
	}
	newstring = malloc(i * sizeof(char));
	if (!newstring)
	{
		return (NULL);
	}
	newstring[i - 1] = '\0';
	i = 0;
	while (newstring[i])
	{
		newstring[i] = f(i, s[i]);
	}
	return (newstring);
}
