/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:17:13 by tchian            #+#    #+#             */
/*   Updated: 2026/10/08 20:23:10 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //like sciss cut out single word from long sentence

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
safety, if string doesnt exist, stop immediate
Edge case1, scissors past the edge of paper
out of bound checks, start outside function stop and give empty box
//retrun string that contains nothing but '\0'
Edge case2, asking for more text than what physically exist
Greedy length capper. after cut left 8 character. if ask len of 50,
auto shrink request len down to 8, so dont chop past end of paper
	Allocate space for custom piece (+1 for '\0')
if system ran out of RAM, exit
	copy loop, trace letter starting from cut point
dont start reading s from index 0, start reading from cut point(start)
		s[start + i], as i goes up. start + 0, start +1
	locks gate adding \0
*/
