/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloiseau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:59:55 by aloiseau          #+#    #+#             */
/*   Updated: 2019/11/20 14:20:52 by aloiseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*swap;

	i = 0;
	swap = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			swap = s + i;
		i++;
	}
	if (s[i] == (char)c)
		swap = s + i;
	return ((char *)swap);
}
