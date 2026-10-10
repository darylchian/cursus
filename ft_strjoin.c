/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:17:13 by tchian            #+#    #+#             */
/*   Updated: 2026/10/08 10:59:52 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joined_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (joined_str == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		joined_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		joined_str[i + j] = s2[j];
		j++;
	}
	joined_str[i + j] = '\0';
	return (joined_str);
}
//cant use (A || B == NULL)
//(!s1 || !s2)  Short for: if (s1 == NULL || s2 == NULL)
//NULL shield guard in case malloc fails
//(char *) right before malloc iscalled typecast.
//force this mystery box from malloc to become a character pointer (a string)
//why sizeof(char), size of char is 1, size of int is 4
//if len1+len2+1 = 8. 8*1 = 8 bytes total
//Writing malloc(8 * sizeof(int)) translates to 8 * 4 = 32 bytes
//, buying you the perfect amount of space.
//by requesting len1+len2+1 chunk in single malloc order
//operating system gurantees find an empty in RAM
//that has 8 consecutive empty slots in a perfect row
//dont put *joined_str infront of joined_str = malloc
// bec giving a new street address to ther pointer container itself
//not modifying the letters inside the house it points to.
//no * hook up tracking container to fresh block of memory
//with * write individual letters into those slots.
//mesure save to s1
//
//Glue train 1: copy s1 into the front
//although i<len1 is same as s1[i] != '\0'
//can also use i<len1 or j<len2 if program passes a corrupted string
//that is missing\0 will instantly crash with seg fault.
