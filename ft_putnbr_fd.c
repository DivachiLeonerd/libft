/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:17:21 by afonso            #+#    #+#             */
/*   Updated: 2021/11/10 18:48:00 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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
