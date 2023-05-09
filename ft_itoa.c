/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:11:05 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/09 18:48:34 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_icount(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 9)
	{
		i++;
		n = n / 10;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		count;
	char	u;
	int		d;

	count = ft_icount(n);
	arr = (char *)ft_calloc(count + 1, (sizeof(char)));
	if (!arr)
		return (NULL);
	if (n == -2147483648)
		return (arr = "-2147483648");
	while (count--)
	{
		if (n < 0)
		{
			n = -n;
			arr[0] = '-';
		}
		d = n / 10;
		u = n % 10;
		arr[count] = u + '0';
		n = d;
	}
	arr[count] = '\0';
	return (arr);
}

