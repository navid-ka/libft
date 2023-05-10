/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:11:05 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/09 20:07:28 by nkeyani-         ###   ########.fr       */
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
        n = -n;
        i++;
    }
    while (n > 9)
    {
        i++;
        n /= 10;
    }
    return (i + 1);
}

char	*ft_itoa(int n)
{
    char	*arr;
    int		count;
    char	u;
    int		d;

    count = ft_icount(n);
    arr = (char *)ft_calloc(count + 1, sizeof(char));
    if (!arr)
        return (NULL);
    if (n < 0)
    {
        arr[0] = '-';
        n = -n;
    }
    while (count-- >= 0)
    {
        d = n / 10;
        u = n % 10;
        arr[count] = u + '0';
        n = d;
    }
    return (arr);
}
