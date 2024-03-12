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
    int i;
    char address[16];
    char *hex = "0123456789abcdef";
    
    i = 15;
    while (i >= 0)
    {
        //Save address of 16 bytes from hex in address[i]
        address[i] = hex[addr % 16];
        addr /= 16;
        i--;
    }
    ft_putstr(address, 16);
    ft_putchar(':');
    ft_putchar(' ');
}

void print_line_content(unsigned char *addr, int size)
{
    int i;
    
    i = 0;
    while(i < 16)
    {
        if (i < size)
            print_hex(addr[i]);
        else
            ft_putstr("  ", 2);
        if (i % 2)
            ft_putchar(' ');
        i++;
    }
    i = 0;
    while(i < size)
    {
        ft_putchar((addr[i] >= 32 && addr[i] <= 126) ? addr[i] : '.');
        i++;
    }
    ft_putchar('\n');
}

//
void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int i;
    unsigned int line_size;
    
    i = 0;
    //while all segment of 16 bytes are not printed
    while (i < size)
    {
        print_address((unsigned long long)(addr + i));
        //If nb of char left to print is less than 16,
        if (size - i < 16)
            line_size = size - i;
        //Section of 16 bytes is complete
        else
            line_size = 16;
        print_line_content(addr + i, line_size);
        i += 16;
    }
    return (addr);
}
