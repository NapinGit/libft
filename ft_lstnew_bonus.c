/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloiseau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:51:21 by aloiseau          #+#    #+#             */
/*   Updated: 2019/11/24 12:41:49 by aloiseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;

	if (!(newlist = (t_list *)malloc(sizeof(*newlist))))
		return (NULL);
	newlist->next = NULL;
	if (content == NULL)
		newlist->content = NULL;
	else
	{
		if (!(newlist->content = malloc(sizeof(content))))
		{
			free(newlist);
			return (NULL);
		}
		ft_memcpy((newlist->content), content, sizeof(content));
		newlist->content = content;
	}
	return (newlist);
}
