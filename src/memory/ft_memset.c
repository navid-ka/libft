/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:41:32 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/07/07 13:03:54 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptrs;
	size_t			i;

	ptrs = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptrs[i++] = (unsigned char)c;
	}
	return (ptrs);
}
