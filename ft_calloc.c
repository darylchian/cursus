/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 20:37:04 by tchian            #+#    #+#             */
/*   Updated: 2026/10/11 22:19:50 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	total;

	if (size != 0 && count > (size_t)-1 / size)
		return (NULL);
	total = count * size;
	result = malloc(total);
	if (result == NULL)
		return (NULL);
	ft_memset(result, 0, total);
	return (result);
}

//pointer to completely mystery data type
	//purpose malloc is blid, doesnt know if want to store int/str/imagein
	//memory block it gives you
	//just hand back generic block pointer (void*)
	//create this variable to act as container to catch whatevr pointer addr
	//malloc spit out
	//empty shelf space clear to put wood once arriv

	//calloc give 2 separate inputs count(how many times you want)
	//& size (how big each item)
	//before ask malloc for space, multiply together get sum bytes
	//measuring tape, how much you need to cut

		//Overflow shield

		//Step2: math calculator

	//if no *allocated, want to hook up tracking variable
	//to fresh block of memory from malloc.
	//if yes with*allocated read/overwrite the actual characters/numbers
	//living inside

	//safety check, out of RAM, if malloc fail stop here.

		//replace all with 0. bleach every single bytes with to 0
