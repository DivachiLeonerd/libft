/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:24:41 by atereso-          #+#    #+#             */
/*   Updated: 2021/11/16 19:31:25 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *mem_loc, int c, unsigned int n)
{
	unsigned int	counter;
	int				*int_pointer;

	counter = 0;
	while (counter < n)
	{
		((unsigned char *)mem_loc)[counter] = (unsigned char)c;
		counter++;
	}
	return (mem_loc);
}
