/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:17:40 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/10 15:45:19 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			slen;
	size_t			j;
	char			c;
	char			*ptrs;
	char			*arr;
	unsigned int	i;

	slen = ft_strlen(s);
	ptrs = (char *)s;
	arr = (char *) malloc(slen + 1 * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	c = '0';
	while (arr[j])
		arr[j++] = f(i, c);
	return (arr);
}
