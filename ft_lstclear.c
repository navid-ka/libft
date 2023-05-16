/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:27:54 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/16 12:54:29 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*middleman;
	t_list	**node;

	node = lst;
	while (*node)
	{
		middleman = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = middleman;
	}
}
