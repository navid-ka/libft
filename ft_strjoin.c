/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:06:25 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/05 15:57:36 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*res;
	char	*ptrs1;

	if (!(ft_strlen(s1)) && !(ft_strlen(s2)))
		return (ft_strdup(""));
	ptrs1 = (char *)s1;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	res = (char *) malloc(sizeof(char) * ((len_s1 + len_s2) + 1));
	if (res == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_memmove(res, ptrs1, ft_strlen(ptrs1) + 1);
	ft_strlcat(res, s2, (len_s1 + len_s2) + 1);
	return (res);
}
