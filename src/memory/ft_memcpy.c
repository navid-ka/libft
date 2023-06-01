/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:23:09 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/06/01 18:34:00 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptrdst;
	unsigned char	*ptrsrc;

	ptrdst = (unsigned char *)dst;
	ptrsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (ptrdst == NULL && ptrsrc == NULL)
			return (ptrsrc);
		ptrdst[i] = ptrsrc[i];
		i++;
	}
	return (ptrdst);
}
