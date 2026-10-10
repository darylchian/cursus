/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:17:13 by tchian            #+#    #+#             */
/*   Updated: 2026/10/08 10:51:38 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
//ignore comments first
//searches for a specific character inside a string and returns a pointer
//to the exact spot where that character is first found
//int c refers to the character searching for but it is int not char
//
// 1. Convert the target 'c' into a plain character
// can also use int i = 0 for normal size string but best
//Walk down the line until string ends
//bec it is int c, need to compare apples to apples. Convert int to char
//if spot a target, return a pointer to exact location
//
//show the address of s[i] exact location
//why add (char *) address of s[i] is read only,
//but function requires and editable pointer (const)
// final check guard for end of string
//
// If target not found
