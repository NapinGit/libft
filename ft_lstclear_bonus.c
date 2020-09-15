/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloiseau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 17:39:02 by aloiseau          #+#    #+#             */
/*   Updated: 2019/11/24 12:41:09 by aloiseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*before;

	tmp = *lst;
	while (tmp)
	{
		before = tmp;
		tmp = tmp->next;
		del(before->content);
		free(before);
	}
	*lst = NULL;
}
