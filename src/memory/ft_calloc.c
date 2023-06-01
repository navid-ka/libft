/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:17:49 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/06/01 18:33:44 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;

	ptr = malloc(number * size);
	if (!ptr)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_memset(ptr, 0, number * size);
	return (ptr);
}
