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

// Vérifie si la base est valide
int ft_is_valid_base(char *base)
{
    char *ptr1;
    char *ptr2;

    ptr1 = base;
    // Vérifie si la base est vide ou a moins de 2 caractères
    if (base == NULL || *(base + 1)  == '\0')
        return (0);

    // Vérifie les caractères de la base
    while (*ptr1)
    {
        // Vérifie les caractères '+' et '-'
        if (*ptr1 == '+' || *ptr1 == '-')
            return (0);

        // Vérifie les doublons
        ptr2 = ptr1 + 1;
        while (*ptr2)
        {
            if (*ptr1 == *ptr2)
                return (0);
            ptr2++;
        }
        ptr1++;
    }
    return (1);
}


// Fonction principale pour afficher le nombre dans la base donnée
void    ft_putnbr_base(int nbr, char *base)
{
    long nb;
    int base_len;// length of the base

    nb = nbr;
    base_len = 0;
    // if ft_is_valid_base == 0, !ft_is_valid_base == 1
    if (!ft_is_valid_base(base))
        return ;
    //Count the length of the base
    while (base[base_len] != '\0')
        base_len++;
    // if the number is negative, display the '-' and make the number positive
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    //Recursive call to display the number in the base
    if (nb >= base_len)
    {
        ft_putnbr_base(nb / base_len, base);
        ft_putnbr_base(nb % base_len, base);
    }
    else
        write(1, &base[nb], 1);
}

/*
#include <unistd.h>

// Verify if the base is valid
int     ft_is_valid_base(char *base)
{
    int i;
    int j;

    i = 0;
    j = 0;
    // if the base[0] is empty or the base[1] is empty, return 0
    if (!base[0] || base[1] == '\0')
        return (0);
    //Check all the characters in the base
    while (base[i] != '\0')
    {
        if (base[i] == '+' || base[i] == '-')
            return (0);
        j = i + 1;
        //Check all occurences of the character in the base 
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
    int base_len;// length of the base

    nb = nbr;
    base_len = 0;
    // if ft_is_valid_base == 0, !ft_is_valid_base == 1
    if (!ft_is_valid_base(base))
        return ;
    //Count the length of the base
    while (base[base_len] != '\0')
        base_len++;
    // if the number is negative, display the '-' and make the number positive
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    //Recursive call to display the number in the base
    if (nb >= base_len)
    {
        ft_putnbr_base(nb / base_len, base);
        ft_putnbr_base(nb % base_len, base);
    }
    else
        write(1, &base[nb], 1);
}*/