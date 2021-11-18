/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:17:21 by afonso            #+#    #+#             */
/*   Updated: 2021/11/16 18:56:36 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	*string;

	i = 0;
	string = ft_itoa(n);
	while (string[i])
	{
		write(fd, &string[i], 1);
		i++;
	}
	write(fd, &string[i], 1);
}
