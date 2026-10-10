/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:17:13 by tchian            #+#    #+#             */
/*   Updated: 2026/10/08 20:22:34 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *) big);
	i = 0;
		while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0'
			&& big[i + j] == little[j]
			&& i + j < len)
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
// if needle empty return entire sentence
//scan: through
// assuming n is the pivot point, when no match is found
//if match found, end
//return to h last pivot point address
//no needle found in haystack
