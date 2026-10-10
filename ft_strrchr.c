/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:17:13 by tchian            #+#    #+#             */
/*   Updated: 2026/10/08 11:30:25 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}
// ignore comments
//locate last occurence of specific character in string
//from end to front
// 1. Convert the target 'c' into a plain character
// can also use int i = 0 for normal size string but best
//Walk to the end where string ends '\0', move towards index 0
//bec it is int c, need to compare apples to apples. Convert int to char
//look for target
//show the address of s[i] exact location
//
// to final check, loop ends at 0, manually check first character
//since backwards
//know s[i] is equal to '\0',
//writing if (s[i] == (char)c) is exactly the same as '\0' == (char)c)
// If target not found
