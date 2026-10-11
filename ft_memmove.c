/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:17:13 by tchian            #+#    #+#             */
/*   Updated: 2026/10/11 14:01:58 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	d = dst;
	s = src;
	if (d > s)
		while (len--)
			d[len] = s[len];
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
	// 2. Typecast to unsigned char so we can move byte by byte.
	//add const bec it is source and it act as safety lock.
	//Allowed to read but forbidden from changing
	//3. check for overlaps
	//if dest is physically later than the source
	// we must copy BACKWARDS to avoid overwriting our data.
	// 4. Otherwise, no unsafe overlap! Copy FORWARDS
	//normally (just like memcpy).
