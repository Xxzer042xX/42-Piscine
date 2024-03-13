/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:16:06 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/13 13:16:06 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Vérifie si la base est valide
int    ft_is_valid_base(char *base)
{
    int i;
    int j;

    i = 0;
    if (!base[0] || !base[1])
        return (0);
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || base[i] == ' ' ||
            (base[i] >= '\t' && base[i] <= '\r'))
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

// Retourne l'index du caractère dans la base, -1 si non trouvé
int    ft_in_base(char c, char *base)
{
    int index;

    index = 0;
    while (base[index])
    {
        if (base[index] == c)
            return (index);
        index++;
    }
    return (-1);
}

// Sauter les espaces blancs et déterminer le signe
void    ft_prepare_str(char **str, int *sign)
{
    while (**str == ' ' || (**str >= '\t' && **str <= '\r'))
        (*str)++;
    *sign = 1;
    while (**str == '-' || **str == '+')
    {
        if (**str == '-')
            *sign *= -1;
        (*str)++;
    }
}

// Convertit le début de la chaîne en entier selon la base
int    ft_atoi_base(char *str, char *base)
{
    int sign;
    int result;
    int base_len;
    int index;

    if (!ft_is_valid_base(base))
        return (0);
    ft_prepare_str(&str, &sign);
    result = 0;
    base_len = 0;
    while (base[base_len])
        base_len++;
    while (*str)
    {
        index = ft_in_base(*str, base);
        if (index == -1)
            break ;
        result = result * base_len + index;
        str++;
    }
    return (result * sign);
}

// Exemple d'utilisation
int main(void)
{
    // Test avec une base décimale
    printf("42 en base décimale: %d\n", ft_atoi_base("42", "0123456789"));
    // Test avec une base binaire
    printf("101010 en base binaire: %d\n", ft_atoi_base("101010", "01"));
    // Test avec une base hexadécimale
    printf("2A en base hexadécimale: %d\n", ft_atoi_base("2A", "0123456789ABCDEF"));
    // Test avec une base octale personnalisée
    printf("52 en base 'poneyvif': %d\n", ft_atoi_base("52", "poneyvif"));
    // Test avec une base invalide (contient des espaces)
    printf("Test base invalide (espaces): %d\n", ft_atoi_base("42", "012 3456789"));
    // Test avec une base invalide (taille 1)
    printf("Test base invalide (taille 1): %d\n", ft_atoi_base("42", "0"));
    // Test avec une base invalide (caractères répétés)
    printf("Test base invalide (répétition): %d\n", ft_atoi_base("42", "01234456789"));
    // Test avec une chaîne vide
    printf("Chaîne vide: %d\n", ft_atoi_base("", "0123456789"));
    
    return 0;
}
