/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:55:12 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/13 12:55:12 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Display a character on the standard output
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

// Verify if the base is valid
int     ft_is_valid_base(char *base)
{
    int i;
    int j;

    i = 0;
    //
    if (!base[0] || base[1] == '\0')
        return (0);
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-')
            return (0);
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

// Fonction principale pour afficher le nombre dans la base donnée
void    ft_putnbr_base(int nbr, char *base)
{
    long nb;
    int base_len;

    nb = nbr;
    base_len = 0;
    if (!ft_is_valid_base(base))
        return ;
    while (base[base_len])
        base_len++;
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= base_len)
    {
        ft_putnbr_base(nb / base_len, base);
        ft_putnbr_base(nb % base_len, base);
    }
    else
        ft_putchar(base[nb]);
}
