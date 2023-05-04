/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:30:18 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/04 13:25:39 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	pos;
	size_t	len_src;

	pos = 0;
	len_src = 0;
	while (*(src + len_src))
		++len_src;
	if (src[pos] != 0)
	{
		while (pos < dstsize -1 && *src)
		{
			dest[pos] = src[pos];
			pos++;
		}
		if (!dest[pos])
		{
			dest[pos] = '\0';
		}
	}
	return (len_src);
}
