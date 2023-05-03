/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:03:25 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/03 12:14:40 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptrs;
	size_t			i;

	i = 0;
	ptrs = (unsigned char *)s;
	while (i < n)
	{
		if (ptrs[i] == (unsigned char)c)
			return (&ptrs[i]);
		i++;
	}
	return (NULL);
}
