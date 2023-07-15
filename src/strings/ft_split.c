/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:32:48 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/07/15 22:56:20 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static char	**ft_freeall(char **tab, size_t i)
{
	while (i-- > 0)
		free(tab[i]);
	free(tab);
	return (NULL);
}

static size_t	ft_splitlen(const char *s, char c)
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

static char	**is_present(char const *s, char c)
{
	char	**arr;

	if (!s || !c)
		return (NULL);
	if (!ft_strchr(s, c))
	{
		arr = malloc(2 * sizeof(char *));
		if (!arr)
			return (NULL);
		arr[0] = ft_strdup(s);
		arr[1] = NULL;
		return (arr);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*start;
	size_t	i;

	is_present(s, c);
	arr = ft_calloc((ft_splitlen(s, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			start = (char *)s;
			while (*s && *s != c)
				s++;
			arr[i++] = ft_substr(start, 0, s - start);
			if (!arr[i])
				return (ft_freeall(arr, i));
		}
	}
	arr[i] = NULL;
	return (arr);
}
