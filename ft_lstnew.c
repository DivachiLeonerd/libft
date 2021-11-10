/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:11:03 by afonso            #+#    #+#             */
/*   Updated: 2021/11/10 17:15:38 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	void	*_content;
	int		i;
	char	*parameter;
	t_list	new_list;

	parameter = (char *)content;
	i = 0;
	_content = malloc(sizeof(content));
	if (!_content)
	{
		return (NULL);
	}
	while (parameter[i])
	{
		((char *)_content)[i] = parameter[i];
		i++;
	}
	new_list.content = _content;
	new_list.next = NULL;
	return ((t_list *)_content);
}