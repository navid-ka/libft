/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:03:08 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/06/01 18:34:05 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptrdst;
	unsigned char	*ptrsrc;

	ptrdst = (unsigned char *)dst;
	ptrsrc = (unsigned char *)src;
	if (ptrdst == NULL && ptrsrc == NULL)
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
