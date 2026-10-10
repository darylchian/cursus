/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:17:13 by tchian            #+#    #+#             */
/*   Updated: 2026/10/08 17:52:14 by tchian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  //convert integer to text & print out specific file descrip

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}
// n< 0 computer dont print minus sign for negative variable when using write
//f the number is negative (and not our special edge case above),
//we manually print the - character first.
//we flip it to a positive number (n = -n) so the rest of our function
//can treat it like a normal, positive number.

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
