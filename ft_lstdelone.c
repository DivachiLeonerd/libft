/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:34:13 by afonso            #+#    #+#             */
/*   Updated: 2021/11/09 11:35:07 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>


void	ft_lstdelone(t_list *lst, void	(*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
