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

void	ft_putstr(char *str, int len)
{
	write (1, str, len);
}

void	print_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write (1, &hex[c / 16], 1);
	write (1, &hex[c % 16], 1);
}

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
