/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloiseau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:07:13 by aloiseau          #+#    #+#             */
/*   Updated: 2019/11/24 12:00:53 by aloiseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_freesplit(char **str)
{
	while (*str)
	{
		free(str);
		(*str)++;
	}
	free(str);
	return (NULL);
}

static size_t	ft_lenworld(const char *s, char c)
{
	size_t len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char		*ft_malcopy(const char *str, size_t size)
{
	unsigned int	i;
	char			*dest;

	i = 0;
	if (!(dest = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (i < size && str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}

static char		**ft_splittt(char **str, char const *s1, char s2)
{
	unsigned	i;
	unsigned	j;

	i = 0;
	j = 0;
	while (*(s1 + i))
	{
		while (*(s1 + i) && *(s1 + i) == s2)
			i++;
		if (*(s1 + i))
		{
			if (!(*(str + j) = ft_malcopy(s1 + i, ft_lenworld(s1 + i, s2))))
				return (NULL);
		}
		else
			break ;
		while (*(s1 + i) && *(s1 + i) != s2)
			i++;
		j++;
	}
	*(str + j) = 0;
	return (str);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**tab;

	i = 0;
	count = 0;
	if (!s)
		return (NULL);
	while (*(s + i))
	{
		while (*(s + i) && *(s + i) == c)
			i++;
		while (*(s + i) && *(s + i) != c)
			i++;
		if (*(s + i - 1) != c)
			count++;
	}
	if (!(tab = malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	if (ft_splittt(tab, s, c) == NULL)
		return (ft_freesplit(tab));
	return (tab);
}
