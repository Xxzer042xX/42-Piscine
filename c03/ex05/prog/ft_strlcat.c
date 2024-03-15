/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:52:09 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 14:52:09 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La fonction ft_strlcat ajoute la chaîne src à la fin de dest, 
// mais ne dépassera pas size-1 caractères. Elle termine toujours 
// par un '\0', sauf si size est 0 ou si dest est plus long que size.
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i; // Longueur actuelle de dest
    unsigned int j; // Longueur totale finale qui sera retournée

    // Calcul de la longueur actuelle de dest
    i = 0;
    while (dest[i] != '\0' && i < size)
        i++;
    
    // j initialement égale à la longueur de dest pour la vérification de la taille
    j = i;
    
    // Ajout de src à la fin de dest
    while (src[i - j] && i + 1 < size)
    {
        dest[i] = src[i - j];
        i++;
    }
    
    // Si i est inférieur à size, ajouter un '\0' à la fin
    if (j < size)
        dest[i] = '\0';
    
    // Pendant ce temps, continuer à calculer la longueur totale de src
    while (src[i - j])
        i++;
    
    // Retourner la longueur totale de la chaîne qu'on aurait écrite
    return (i);
}
