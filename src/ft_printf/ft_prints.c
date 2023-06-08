/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:50:11 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/06/08 16:47:14 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_prints(char *s)
{
	int	len;

	if (!s)
	{
		if (write (1, "(null)", 6) == -1)
			return (-1);
		return (6);
	}
	len = ft_strlen(s);
	if (write(1, s, len) == -1)
		return (-1);
	return (len);
}
