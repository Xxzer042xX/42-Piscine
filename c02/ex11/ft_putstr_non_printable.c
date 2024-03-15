/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:16:23 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/08 19:16:23 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Converts a character to its hexadecimal value(hexa = 16)
char conv_low(unsigned char c)
{
    if (c < 10)
        return ('0' + c);
    else
        return ('a' + c - 10);
}

//Displays a non-printable character in hexadecimal, divise the byte (nibble = 4  bits = 1/2 byte)
void aff_non_printable(unsigned char c)
{
    char hexa[2];

    hexa[0] = conv_low(c / 16);
    hexa[1] = conv_low(c % 16);
    write(1, "\\", 1);
    write(1, hexa, 2);
}

//Displays a string, replacing non-printable characters with their hexadecimal value
void ft_putstr_non_printable(char *str)
{
    int i = 0;
    while (str[i])
    {
        //If the character is printable, display it
        if (str[i] >= 32 && str[i] <= 126)
            write(1, &str[i], 1);
        else
            aff_non_printable(str[i]);
        i++;
    }
}
