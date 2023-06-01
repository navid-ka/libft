/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:17:40 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/06/01 18:35:28 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			slen;
	char			*ptrs;
	unsigned int	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	ptrs = malloc(slen + 1 * sizeof(char));
	if (!ptrs)
		return (NULL);
	i = 0;
	while (s[i] > 0)
	{
		ptrs[i] = f(i, s[i]);
		i++;
	}
	ptrs[i] = '\0';
	return (ptrs);
}
