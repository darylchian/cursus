/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:17:13 by tchian            #+#    #+#             */
/*   Updated: 2026/10/08 17:48:21 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  //write single char to specific dest point instead forcing

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// • fd = 1 (Standard Output): Sends text straight to your terminal screen
//monitor (this is your normal printf).
// • fd = 2 (Standard Error): Sends text to the error channel monitor
//(usually colored red or sent to a crash log).
// • fd = 3 or higher (Custom Files): Writes text directly into a
//physical .txt file sitting on your hard drive!
// The write() tool legally requires three inputs to function:
// 1. The Destination (fd): Where to send the byte channel.
// 2. The Starting Address Address (&c): A pointer map address showing where
//the character byte is sitting in RAM.
// 3. The Total Byte Size (1): How many bytes to send (since a single
//character is exactly 1 byte, this is always 1).
