/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 20:37:04 by tchian            #+#    #+#             */
/*   Updated: 2026/10/07 21:59:55 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
//traverse the list until hit the end (NULL)
//counter can only hold positive whole numbers
//pass lst to ft_lstsize(head), c pass head by value
//means lst is just a local copy of pointer variable
//print an unsigned int using printf use %u format specifier instead of %d /%i
