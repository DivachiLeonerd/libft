/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:29:25 by afonso            #+#    #+#             */
/*   Updated: 2021/11/08 11:48:29 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*pointer;
	int		i;

	i = 0;
	pointer = lst;
	while (pointer->next)
	{
		pointer++;
		i++;
	}
	if (i > 0)
		i++;
	return (i);
}
