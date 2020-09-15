/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloiseau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 15:37:17 by aloiseau          #+#    #+#             */
/*   Updated: 2019/11/20 16:02:28 by aloiseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t lendst;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	lendst = i;
	while (src[i - lendst] && i < dstsize - 1 && dstsize != 0)
	{
		dst[i] = src[i - lendst];
		i++;
	}
	if (lendst < dstsize)
		dst[i] = '\0';
	while (src[j])
		j++;
	return (lendst + j);
}
