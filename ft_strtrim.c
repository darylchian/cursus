/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:17:13 by tchian            #+#    #+#             */
/*   Updated: 2026/10/06 20:09:25 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}

/*strip away the beginning, the end, leaving middle intact
s1 string to be trim, set contains set of character to be removed
if characters from set fouund in middle of s1, completely ignored and untouched
once the start and end scanning market hit a character in set, stop
*/

	/*if either input dont exist, exit shield */

		/*front mower: drive forward as long as there is trash along
		the ource string
	walk forward from the front while characters is in the set
	strchr locate first occurrence of character within a string
	bouncer 1 at the start. condition 1, are we inside the string &
	condition 2, is this character trash*/

	/*Find the end index of string
	find the length of s1 to set our end marker
	bouncer reset counter to 0. still start from index 0
	and count to the back */

		/*move end pointer backwards if character is found in trash set */

		/*copy protected middle segment over to new memory */

	/* securely close teh string room */

// 		i = 0;
// 	while (start < end)
// 	{
// 		trimmed[i] = s1[start];
// 		i++;
// 		start++;
// 	}
// 	trimmed[i] = '\0';
// 	return (trimmed);
// }
