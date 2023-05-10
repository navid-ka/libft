/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:11:05 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/10 11:50:45 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_icount(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
	}
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*arr;
	int			count;
	int			offset;
	int			d;
	long int	nb;

	nb = n;
	count = ft_icount(nb);
	offset = 0;
	arr = (char *)ft_calloc(count + 1, sizeof(char));
	if (!arr)
		return (NULL);
	if (nb < 0)
	{
		arr[0] = '-';
		nb = -nb;
		offset = 1;
	}
	while (count-- > offset)
	{
		d = nb / 10;
		arr[count] = 48 + nb % 10;
		nb = d;
	}
	return (arr);
}
