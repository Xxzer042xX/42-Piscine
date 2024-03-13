/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 13:16:13 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/10 13:16:13 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

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

