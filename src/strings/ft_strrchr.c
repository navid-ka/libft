/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:33:05 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/06/01 18:35:41 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*ptrs;

	ptrs = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			ptrs = (char *)&s[i];
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (ptrs);
}
