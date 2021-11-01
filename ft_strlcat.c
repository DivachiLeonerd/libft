/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:27:29 by atereso-          #+#    #+#             */
/*   Updated: 2021/10/29 14:41:55 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int	t_size_t;

t_size_t	strlcat(char *dst, const char *src, t_size_t dstsize)
{
	int	i;
	int	counter;

	counter = dstsize;
	i = 0;
	while (counter > 0 && *src)
	{
		while (*dst)
		{
			dst++;
			counter--;
		}
		*dst = src[i];
		dst++;
		i++;
	}
	*dst = '/0';
	return (i + dstsize);
}
