/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:17:13 by tchian            #+#    #+#             */
/*   Updated: 2026/10/08 19:59:25 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*purpose to make permanent, independent twin copy of text string
in brand new section of memory.

len is ruler measure orginal text
	copy: blanksheet of paper
	i : index finger tracking your place
	measure how long orignal string length is

	allocate: malloc buy brand new strip of RAM
	big enough for text +1 for '\0'
	null shield. stop program if computer runs out of RAM
	loop that trace and copies visible letters one by one
	locks the gate by adding essential '\0' stop sign
	delivers key to brand new safe to modify twin string
*/
