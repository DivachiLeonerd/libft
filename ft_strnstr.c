/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:50:59 by atereso-          #+#    #+#             */
/*   Updated: 2021/10/28 16:51:04 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	int	i;

	i = 0;
	if (!*needle)
	{
		return (haystack);
	}
	while (*haystack && len > 0)
	{
		if (*haystack != needle[i])
		{
			i = 0;
			haystack++;
		}
		if (*haystack == needle[i])
		{
			haystack++;
			i++;
			if (!needle[i])
			{
				return (needle);
			}
		}
	}
	return ('\0');
}
