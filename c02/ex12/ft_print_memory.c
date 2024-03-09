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

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str, int len)
{
    write(1, str, len);
}

void print_hex(unsigned char c)
{
    char *hex = "0123456789abcdef";
    ft_putchar(hex[c / 16]);
    ft_putchar(hex[c % 16]);
}

void print_address(unsigned long long addr)
{
    char address[16];
    char *hex = "0123456789abcdef";
    for (int i = 15; i >= 0; i--)
    {
        address[i] = hex[addr % 16];
        addr /= 16;
    }
    ft_putstr(address, 16);
    ft_putchar(':');
    ft_putchar(' ');
}

void print_line_content(unsigned char *addr, size_t size)
{
    size_t i;
    for (i = 0; i < 16; i++)
    {
        if (i < size)
            print_hex(addr[i]);
        else
            ft_putstr("  ", 2);
        if (i % 2)
            ft_putchar(' ');
    }
    for (i = 0; i < size; i++)
        ft_putchar((addr[i] >= 32 && addr[i] <= 126) ? addr[i] : '.');
    ft_putchar('\n');
}

void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int i = 0;
    while (i < size)
    {
        print_address((unsigned long long)(addr + i));
        size_t line_size = (size - i < 16) ? size - i : 16;
        print_line_content(addr + i, line_size);
        i += 16;
    }
    return (addr);
}
