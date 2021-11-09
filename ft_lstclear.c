/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:11:47 by afonso            #+#    #+#             */
/*   Updated: 2021/11/09 15:53:54 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while ((*lst)->next)
	{
		del((*lst)->content);
		temp = *lst;
		free(temp);
		lst++;
	}
	lst = NULL;
	return;
}
