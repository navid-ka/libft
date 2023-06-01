/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:41:32 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/06/01 18:34:09 by bifrost          ###   ########.fr       */
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
