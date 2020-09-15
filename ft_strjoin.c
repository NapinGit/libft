/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloiseau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:20:29 by aloiseau          #+#    #+#             */
/*   Updated: 2019/11/22 18:51:09 by aloiseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*s3;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen((char *)s1);
	j = 0;
	k = 0;
	if (!(s3 = (char *)malloc(sizeof(*s3) * (ft_strlen((char *)s1) +
				ft_strlen((char *)s2) + 1))))
		return (NULL);
	while (j != i)
	{
		s3[j] = s1[j];
		j++;
	}
	i = ft_strlen((char *)s2);
	while (k != i)
		s3[j++] = s2[k++];
	s3[j] = '\0';
	return (s3);
}
