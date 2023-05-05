/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:53:53 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/05 18:53:56 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	len_set;
	char	*res;
	char	*ptrset;

	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	ptrset = (char *)s1;
	res = (char *) malloc(sizeof(char) * ((len_s1 + len_set) + 1));
	{
		errno = ENOMEM;
		return (NULL);
	}
}
