/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:29:25 by afonso            #+#    #+#             */
/*   Updated: 2021/12/13 14:58:52 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*pointer;
	int		i;

	i = 0;
	if (lst)
		return (0);
	pointer = lst;
	while (pointer->next)
	{
		pointer++;
		i++;
	}
	return (i);
}
