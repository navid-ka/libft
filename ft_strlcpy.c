/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:30:18 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/04 18:20:49 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;
	char	*ptrsrc;
	char	*ptrdest;

	ptrsrc = (char *)src;
	ptrdest = (char *)dst;
	len = ft_strlen(ptrsrc);
	if (dstsize < 1)
		return (len);
	i = 0;
	while (ptrsrc[i] && i < dstsize -1)
	{
			ptrdest[i] = ptrsrc[i];
			i++;
	}
	ptrdest[i] = '\0';
	return (len);
}
