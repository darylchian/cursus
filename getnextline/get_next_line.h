/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:17:13 by tchian            #+#    #+#             */
/*   Updated: 2026/10/11 15:54:07 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUFFER_SIZE
# define BUFFER_SIZE 42

# include <stddef.h> //need for size_t
# include <unistd.h> //need for write
# include <stdlib.h>



//Declaration of functionss

char    *get_next_line(int fd);
char    *ft_strchr(const char *s, int c);
size_t  ft_strlen(const char *s);
char    *ft_strjoin(char *s1, char *s2);
char    *ft_substr(char const *s, unsigned int start, size_t len);

#endif
