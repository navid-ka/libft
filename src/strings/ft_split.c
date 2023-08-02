/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:32:48 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/08/02 16:14:37 by nkeyani-         ###   ########.fr       */
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

static char **ft_split_aux(char **arr, char const *s, char c)
{	
	if (!s)
		return (NULL);
	arr = ft_calloc((ft_splitlen(s, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*start;
	size_t	i;

	arr = NULL;
	ft_split_aux(arr, s, c);
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
			if (!arr[i - 1])
				return (ft_freeall(arr, i - 1));
		}
	}
	arr[i] = NULL;
	return (arr);
}
