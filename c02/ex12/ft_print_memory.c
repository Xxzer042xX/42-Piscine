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

void ft_putstr(char *str, int len)
{
    write(1, str, len);
}

void print_hex(unsigned char c)
{
    char *hex = "0123456789abcdef";
    write(1, &hex[c / 16], 1);
    write(1, &hex[c % 16], 1);
}

void print_address(unsigned long long addr)
{
    int i;
    char address[16];
    char *hex = "0123456789abcdef";
    
    i = 15;
    while (i >= 0)
    {
        //Assign the hex value of addr to the address array from end to start
        address[i] = hex[addr % 16];
        //Divide addr by 16 for next iteration
        addr /= 16;
        i--;
    }
    ft_putstr(address, 16);
    ft_putstr(": ", 2);
}

void print_line_content(unsigned char *addr, int line_size)
{
    int i;
    
    i = 0;
    //While all bytes of the line are not printed
    while(i < 16)
    {
        //Print the hex value of the byte
        if (i < line_size)
            print_hex(addr[i]);
        //Print 2 spaces after the last hex value
        else
            ft_putstr("  ", 2);
        //Print a space after every 2 hex values
        if (i % 2)// i % 2 == 1
            write(1, " ", 1);
        i++;
    }
    i = 0;
    while(i < line_size)
    {
        if (addr[i] >= 32 && addr[i] <= 126)
            write(1, &addr[i], 1);
        else
            write(1, ".", 1);        
        i++;
    }
    write(1, "\n", 1);
}

//
void *ft_print_memory(void *addr, unsigned int size)//size == sizeof(str) %% addr == 1st element of str
{
    unsigned int i;//index
    unsigned int line_size;//size of the line
    
    i = 0;//i +=16 after each line
    //while all segment of 16 bytes are not printed
    while (i < size)
    {
        //Print the address of the first byte of the line
        print_address((unsigned long long)(addr + i));
        //If size - i is less than 16, the line size is the remaining size
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