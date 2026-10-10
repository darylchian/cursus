/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:17:13 by tchian            #+#    #+#             */
/*   Updated: 2026/10/08 10:48:38 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*belt1;
	unsigned char	*belt2;

	belt1 = (unsigned char *)s1;
	belt2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (belt1[i] != belt2[i])
		{
			return ((belt1[i]) - (belt2[i]));
		}
		i++;
	}
	return (0);
}
/* compares 2 memory blocks cargo scanner
turn blocks into bytes (unsigned char) changing name
blindly loops until reaches 'n'
once spot a difference
if n > i
*/
