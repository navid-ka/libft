/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:03:08 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/07/31 15:05:40 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptrdst;
	unsigned char	*ptrsrc;

	ptrdst = (unsigned char *)dst;
	ptrsrc = (unsigned char *)src;
	if (ptrdst == NULL || ptrsrc == NULL)
		return (0);
	if (dst > src)
	{
		while (len)
		{
			ptrdst[len - 1] = ptrsrc[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(ptrdst, ptrsrc, len);
	return (ptrdst);
}
