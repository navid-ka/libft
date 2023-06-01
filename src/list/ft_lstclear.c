/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:27:54 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/06/01 18:33:14 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

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
