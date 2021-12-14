/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:24:44 by afonso            #+#    #+#             */
/*   Updated: 2021/12/11 15:08:26 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static	char	*alloc_string(int n);
static	char	*reverse_string(char *string);

// char	*ft_itoa(int n)
// {
// 	char			ch;
// 	int				i;
// 	char			*string;
// 	long int aux;
// 	if (n < -2147483648 && n > 2147483647)
// 		return (NULL);
// 	i = 0;
// 	string = alloc_string(n);
// 	if (n < 0)
// 	{
// 		string[i] = '-';
// 		n = -n;
// 		i++;
// 	}
// 	while (n != 0)
// 	{
// 		ch = n % 10 + 48;
// 		string[i] = ch;
// 		n = n / 10;
// 		i++;
// 	}
// 	string[i] = '\0';
// 	return (reverse_string(string));
// }

char	*ft_itoa(int n)
{
	char			ch;
	int				i;
	char			*string;
	long int		aux;

	aux = n;
	if (aux == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	string = alloc_string(aux);
	if (aux == 0)
		string[i++] = '0';
	if (aux < 0)
	{
		aux = -aux;
	}
	while (aux != 0)
	{
		ch = aux % 10 + 48;
		string[i] = ch;
		aux = aux / 10;
		i++;
	}
	string = reverse_string(string);
	return (string);
}

static char	*reverse_string(char *string)
{
	char	tmp;
	int		strlen;
	int		i;
	int		end;
	int		begin;

	i = 0;
	begin = 0;
	strlen = ft_strlen(string);
	end = strlen - 1;
	while (i < (strlen / 2))
	{
		tmp = string[begin];
		string[begin] = string[end];
		string[end] = tmp;
		i++;
		begin++;
		end--;
	}
	string[strlen] = '\0';
	return (string);
}

static	char	*alloc_string(int n)
{
	unsigned int	power;
	char			*string;
	int				aux;

	aux = n;
	power = 0;
	if (n == 0)
		power++;
	if (n < 0)
	{
		power++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		power++;
	}
	string = malloc((power + 1) * sizeof(char));
	if (!string)
		return (NULL);
	if (aux < 0)
		string[power - 1] = '-';
	return (string);
}

// int	main(void)
// {
// 	int n = 0;
// 	int t = 10;
// 	int s = -10;
// 	char	*str = ft_itoa(s);

// 	// char	string[1000] = "Carambolas";
// 	// printf("reverse string:%s\n", reverse_string(string));
// 	printf("numero 0 : -%s-\n", ft_itoa(n));
// 	printf("numero 10 : -%s-\n", ft_itoa(t));
// 	printf("numero -10 : -%s-\n", ft_itoa(s));
// 	printf("numero 42: -%s-\n", ft_itoa(42));
// 	printf("teste: -%c-\n", str[0]);
// 	printf("teste: -%c-\n", str[1]);
// 	printf("teste: -%c-\n", str[2]);
// 	printf("teste: -%c-\n", str[3]);
// 	return (0);
// }
