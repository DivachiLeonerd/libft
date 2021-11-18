/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:23:40 by atereso-          #+#    #+#             */
/*   Updated: 2021/10/28 16:24:13 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	if (*(char *)s1 == *(char *)s2)
		return (0);
	while (*(char *)s1 && *(char *)s2 && n > 0)
	{
		if (*(char *)s1 == *(char *)s2)
		{
			s1++;
			s2++;
		}
		else
			return (*(char *)s1 - *(char *)s2);
	}
	return (0);
}
