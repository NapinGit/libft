/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloiseau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 13:50:30 by aloiseau          #+#    #+#             */
/*   Updated: 2019/11/20 17:26:23 by aloiseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char const	*ft_find_first(char const *s1, char const *set)
{
	int				i;

	i = 0;
	while (set[i] != '\0')
	{
		if (*s1 == set[i])
		{
			i = 0;
			s1++;
		}
		else
			i++;
	}
	return (s1);
}

static size_t		ft_find_last(const char *s1, char const *set)
{
	size_t			i;
	int				j;

	i = ft_strlen(s1);
	if (i == 0)
		return (0);
	j = 0;
	while (set[j])
	{
		if (s1[i - 1] == set[j])
		{
			j = 0;
			i--;
		}
		else
			j++;
	}
	return (i);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	size_t			len;
	char			*dest;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	s1 = ft_find_first(s1, set);
	if (s1 != '\0')
	{
		len = ft_find_last(s1, set);
		dest = ft_substr(s1, 0, len);
		return (dest);
	}
	else
		return (0);
}
