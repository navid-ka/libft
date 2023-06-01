/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:30:11 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/06/01 18:32:43 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

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
