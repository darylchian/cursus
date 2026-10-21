/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:17:13 by tchian            #+#    #+#             */
/*   Updated: 2026/10/21 22:52:03 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

ssize_t read(int fd, void *buf, size_t count)

char	*get_next_line(int fd)
{
	static char	*saved;
	char		*buffer;
	char		*line;

	(void)saved;
	(void)buffer;
	(void)line;
	return (NULL);


bytes_read = read(fd, buffer, BUFFER_SIZE)

}

reading loop

line extraction

static storage
For now, don't worry about making it return a line. Your next task is to understand how read() fills buffer.

The overall process will be:
1. Allocate memory for buffer.
2. Call read(fd, buffer, BUFFER_SIZE).
3. Add '\0' after the bytes read.
4. Append the data to saved using your ft_strjoin().
5. Repeat until you find '\n' or reach the end of the file.
Start with steps 1–3 first. Once you can read a chunk of data successfully, we'll connect it to your helper functions and build the reading loop.

//static variable remember its value between function call.
//allows function to remember text that hasnt return
// fd: identifies file or input stream to read;
// saved: stores text between fucntion calls
// buffer: temporary store bytes return by read()
// line: hold the line that will be returned.
// read: read raw nytes from file descriptor to buffer. bypass space buffer
//reading and line extraction logic goes to static char *saved

