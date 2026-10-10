/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:17:13 by tchian            #+#    #+#             */
/*   Updated: 2026/10/08 20:19:36 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	i;
	size_t	src_len;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
	{
		return (src_len + dstsize);
	}
	i = dst_len;
	j = 0;
	while (src[j] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (src_len + dst_len);
}
//concatenate
// 1. COUNT: See who is inside and who is waiting outside
//src line outside
// 2. PANIC: If the club is already maxed out, don't touch anything!
// 3. START: Go to the very end of the current party inside
// dest buffer hold CAT, dst_len is 3, 3 refer to '\0'.
//So can concatenate \O replace with new
// j marker for new string src. want to copy new string from beginning from 0
//concantenate src onto dst until src ends OR we hit the max (dstsize - 1)
// 5. THE GUARD: Lock the door with a '\0' in the very last saved slot
// 6. REPORT: Tell the boss the total length we wanted to make
