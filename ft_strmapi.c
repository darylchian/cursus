/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 18:08:44 by tchian            #+#    #+#             */
/*   Updated: 2026/10/11 21:45:35 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	//allocates and return a new string (use malloc, must free)

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*new_string;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new_string = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_string)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_string[i] = f((unsigned int)i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
