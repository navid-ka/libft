/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:22:08 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/05 14:11:20 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptrs;
	size_t	i;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	ptrs = (char *) malloc(sizeof(char) * (len + 1));
	if (ptrs == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	i = 0;
	while (i < len && s[i])
	{
		ptrs[i] = s[i + start];
		i++;
	}
	ptrs[i] = '\0';
	return (ptrs);
}
