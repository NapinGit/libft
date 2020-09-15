/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloiseau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 18:47:47 by aloiseau          #+#    #+#             */
/*   Updated: 2019/11/22 13:44:05 by aloiseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lennb(long int n)
{
	long	nb;
	int		len;

	nb = n;
	len = 0;
	if (nb == 0)
		return (len + 1);
	if (nb < 0)
	{
		nb = (nb * -1);
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int long	nb;
	int			len;
	char		*dest;

	nb = n;
	len = ft_lennb(nb);
	if (!(dest = (char *)malloc(sizeof(*dest) * (len + 1))))
		return (0);
	dest[len--] = '\0';
	if (nb == 0)
	{
		dest[0] = '0';
		return (dest);
	}
	if (nb < 0)
	{
		dest[0] = '-';
		nb = (nb * -1);
	}
	while (nb > 0)
	{
		dest[len--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (dest);
}
