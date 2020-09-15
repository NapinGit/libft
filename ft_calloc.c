/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloiseau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:41:09 by aloiseau          #+#    #+#             */
/*   Updated: 2019/11/22 15:36:40 by aloiseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_bto0(void *s, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

void		*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(size * count);
	if (ptr == NULL)
		return (0);
	ft_bto0(ptr, count * size);
	return (ptr);
}
