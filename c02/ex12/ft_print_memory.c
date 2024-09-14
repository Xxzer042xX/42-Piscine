/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:28:15 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/08 20:28:15 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function to print the first `len` characters of a string
void	ft_putstr(char *str, int len)
{
	write (1, str, len);
}

// Function to print the hexadecimal representation of an unsigned char
void	print_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write (1, &hex[c / 16], 1);
	write (1, &hex[c % 16], 1);
}

// Function to print the address in hexadecimal format
void	print_address(unsigned long long addr)
{
	int		i;
	char	address[16];
	char	*hex;

	hex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		address[i] = hex[addr % 16];
		addr /= 16;
		i--;
	}
	ft_putstr(address, 16);
	ft_putstr(": ", 2);
}

// Function to print the contents of a memory line in hexadecimal format
void	print_line_content(unsigned char *addr, int line_size)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i < line_size)
			print_hex(addr[i]);
		else
			ft_putstr("  ", 2);
		if (i % 2)
			write (1, " ", 1);
		i++;
	}
	i = 0;
	while (i < line_size)
	{
		if (addr[i] >= 32 && addr[i] <= 126)
			write (1, &addr[i], 1);
		else
			write (1, ".", 1);
		i++;
	}
	write (1, "\n", 1);
}

// Function to print memory contents in a formatted way
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	line_size;

	i = 0;
	while (i < size)
	{
		print_address((unsigned long long)(addr + i));
		if (size - i < 16)
			line_size = size - i;
		else
			line_size = 16;
		print_line_content(addr + i, line_size);
		i += 16;
	}
	return (addr);
}
/* 

#include <stdio.h>
int main(void)
{
    char str[] = "Bonjour les aminches\t\n\tc\a est \c
	fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";

    ft_print_memory(str, sizeof(str));
    return (0);
}
*/