/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:24:44 by afonso            #+#    #+#             */
/*   Updated: 2021/11/02 19:47:55 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int n)
{
	char	ch;
	char	*string;
	int		i;

	i = 0;
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

	strlen = 0;
	while (string[strlen])
	{
		strlen++;
	}
	strlen++;
	while (i >= strlen / 2)
	{
		
	}

}
