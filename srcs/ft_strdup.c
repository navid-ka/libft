/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:20:59 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/04/20 14:16:52 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	size_t	len;
	int		i;
	char	*dup;

	len = ft_strlen(s);
	dup = (char *) malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
