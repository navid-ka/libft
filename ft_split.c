/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:32:48 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/08 16:26:48 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_freeall(char **tab, size_t i)
{
	while (i-- > 0)
		free(tab[i]);
	free(tab);
	return (NULL);
}

static size_t	ft_splitlen(char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	splitlen;

	splitlen = ft_splitlen((char *)s, c);
	arr = ft_calloc((splitlen + 1), sizeof(char *));
	if (!*arr)
	{
		arr[0] = ft_strdup("");
		return (arr);
	}
	i = 0;
	while (*s)
	{
		arr[i] = ft_substr(s, 0, splitlen);
		i++;
	}
	if (arr[i] == NULL)
		return (ft_freeall(arr, i));
	return (arr);
}
