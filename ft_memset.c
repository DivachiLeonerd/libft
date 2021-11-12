/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:24:41 by atereso-          #+#    #+#             */
/*   Updated: 2021/11/12 11:01:28 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *mem_loc, int c, int n)
{
	int	counter;
	int	i;
	int	*int_pointer;

	counter = 0;
	while (counter <= n)
	{
		((int *)mem_loc)[counter] = c;
		counter++;
	}
	return (mem_loc);
}
