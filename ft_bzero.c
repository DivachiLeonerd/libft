/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:16:20 by atereso-          #+#    #+#             */
/*   Updated: 2021/10/28 16:16:54 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned int n)
{
	while (((char *)s) && n >= 0)
	{
		(*(char *)s) = '\0';
		(*(char *)s)++;
		n--;
	}
}
