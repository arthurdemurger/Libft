/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:43:46 by ademurge          #+#    #+#             */
/*   Updated: 2022/03/18 13:38:30 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new_lst;
	
	new_lst = NULL;
	while (lst && f && del)
	{
		tmp = ft_lstnew((f)(lst->content));
		if (!tmp)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);	
		}
		ft_lstadd_back(&new_lst, tmp);
		lst = lst->next;
	}
	if (new_lst)
		return (new_lst);
	return (NULL);
}
