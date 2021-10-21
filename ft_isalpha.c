/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:24:55 by atereso-          #+#    #+#             */
/*   Updated: 2021/10/18 18:32:46 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(unsigned char c)
{
	if (c >= 65 && c <= 90)
	{
		return (c);
	}
	if (c >= 97 && c <= 122)
	{
		return (c);
	}
	else
		return (0);
}