/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:24:44 by afonso            #+#    #+#             */
/*   Updated: 2021/11/03 17:46:34 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_itoa(int n)
{
	char			ch;
	int				i;
	char			*string;

	i = 0;
	string = alloc_string(n);
	if (n < 0)
	{
		string[i] = '-';
		n = -n;
		i++;
	}
	while (n >= 10)
	{
		ch = n % 10 + 48;
		string[i] = ch;
		n = n / 10;
		i++;
	}
}

static	char	*reverse_string(char *string)
{
	char	tmp;
	int		strlen;
	int		i;
	char	*last_marker;

	i = 0;
	strlen = 0;
	while (string[strlen])
	{
		strlen++;
	}
	last_marker = &string[strlen];
	last_marker--;
	while (i < strlen / 2)
	{
		tmp = *string;
		*string = *last_marker;
		last_marker = tmp;
		i++;
	}
}

static char	*alloc_string(int n)
{
	int				base;
	unsigned int	power;
	char			*_string;

	base = n;
	while (base > 0)
	{
		base = base / 10;
		power++;
	}
	_string = malloc(power * sizeof(char));
	if (!_string)
		return (NULL);
	return (_string);
}
