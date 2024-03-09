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

// Cette fonction convertit un chiffre en sa représentation hexadécimale (en minuscules)
char conv_low(unsigned char c)
{
    if (c < 10)
        return ('0' + c);
    else
        return ('a' + c - 10);
}

// Cette fonction affiche un caractère non imprimable sous forme hexadécimale
void aff_non_printable(unsigned char c)
{
    write(1, "\\", 1);
    // Conversion et affichage du caractère en hexadécimal
    char hexa[2];
    hexa[0] = conv_low(c / 16);
    hexa[1] = conv_low(c % 16);
    write(1, hexa, 2);
}

// Cette fonction affiche une chaîne de caractères, avec les non-imprimables en hexa
void ft_putstr_non_printable(char *str)
{
    int i = 0;
    while (str[i])
    {
        // Si le caractère est imprimable
        if (str[i] >= 32 && str[i] <= 126)
            write(1, &str[i], 1);
        else
            aff_non_printable(str[i]);
        i++;
    }
}
/*
int main(void)
{
    char str[] = "Coucou\ntu\tvas\\bien ?";
    ft_putstr_non_printable(str);
    return (0);
}

*/