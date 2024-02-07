/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:49:48 by afonso            #+#    #+#             */
/*   Updated: 2021/12/27 14:46:09 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	if (!s)
		return (NULL);
	if (start < ft_strlen(s))
	{
		if (start + len < ft_strlen(s))
			str = malloc(sizeof(char) * (len + 1));
		else
			str = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	}
	else
		str = malloc(1 * sizeof(char));
	if (!str)
		return (NULL);
	i = start;
	j = 0;
	while ((start < ft_strlen(s) && i < start + len && s[i] != '\0'))
	{
		str[j++] = s[i++];
	}
	str[j] = '\0';
	return (str);
}

/* int main(void)
 {
 	char	*mysub;
    char    *sub;
 	mysub = ft_substr("Tripouille", 100, 1);
 	sub = ft_substr("Tripouille", 100, 1);
 	printf("%s & %p & %lu\n", mysub, mysub, strlen(mysub));
 	printf("%s & %p & %lu\n", sub, sub, strlen(sub));
    free(sub);
 	free(mysub);
    }*/
