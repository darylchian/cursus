/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 20:37:04 by tchian            #+#    #+#             */
/*   Updated: 2026/10/08 20:48:16 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
//Its job is to take a single link from your train chain (a node),
//completely wipe out the cargo sitting inside it
//using a custom cleaning function (del), and then smash the
//empty train car itself using free
//
// void (*del)(void *) is a function pointer (function as argument)
// node content is generic void *
// linked list library doesnt know type of data stored inside
//since library dont know cant just call
// free(lst->content) that know how to wipe out specific data type.
