/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:16:45 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/04 20:23:28 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;
	char	*ptrsrc;
	char	*ptrdest;
	char	*ptrres;

	ptrsrc = (char *)src;
	ptrdest = (char *)dst;
	ptrres = NULL;
	i = 0;
	len = ft_strlen(ptrsrc);
	if (dstsize < 1)
		return (len);
	while (ptrsrc[i] && i < dstsize -1)
	{
		ptrres[i] = ptrsrc[len + i];
		i++;
	}
	len = ft_strlen(ptrres);
	if (ptrres)
		ptrres[i] = '\0';
	return (len);
}
