/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:17:13 by tchian            #+#    #+#             */
/*   Updated: 2026/10/21 20:50:11 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h> //need for size_t
# include <unistd.h> //need for write
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42

//Declaration of functionss

char    *get_next_line(int fd);
char    *ft_strchr(const char *s, int c);
size_t  ft_strlen(const char *s);
char    *ft_strjoin(const char *s1, const char *s2);
char    *ft_substr(const char *s, unsigned int start, size_t len);

#endif
