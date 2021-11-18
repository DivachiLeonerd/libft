/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:24:44 by afonso            #+#    #+#             */
/*   Updated: 2021/11/16 18:54:59 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*alloc_string(int n);

static	void	reverse_string(char *string);

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
	while (n != 0)
	{
		ch = n % 10 + 48;
		string[i] = ch;
		n = n / 10;
		i++;
	}
	reverse_string(string);
	return (string);
}

static	void	reverse_string(char *string)
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
		*last_marker = tmp;
		i++;
	}
}

static	char	*alloc_string(int n)
{
	unsigned int	power;
	char			*_string;

	if (n < 0)
		power++;
	while (n > 0)
	{
		n = n / 10;
		power++;
	}
	_string = malloc(power * sizeof(char));
	if (!_string)
		return (NULL);
	return (_string);
}
