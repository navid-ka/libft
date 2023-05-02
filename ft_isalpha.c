/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:30:11 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/02 17:29:12 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	ft_isupper(int c)
// {
// 	if (c >= 'A' && c <= 'Z')
// 		return (1);
// 	else
// 		return (0);
// }

// static int	ft_islower(int c)
// {
// 	if (!(c >= 'a' && c <= 'z'))
// 		return (0);
// 
// 		
// }

// int	ft_isalpha(int c)
// {
// 	if (ft_islower(c) || ft_isupper(c))
// 		return (1);
// 	else
// 		return (0);
// }
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
