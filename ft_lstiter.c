/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:29:51 by afonso            #+#    #+#             */
/*   Updated: 2021/11/09 17:31:25 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstiter(t_list *lst, void(*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
	ft_lstnew((f)(lst));
	return;
}
