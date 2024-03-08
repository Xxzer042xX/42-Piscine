/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:51:58 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/08 11:51:58 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//La fonction strlcpy() copie jusqu’à la taille - 1 caractères de la chaîne terminée par NUL src vers dst, terminant le résultat par NUL.
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned i;//pour me deplacer dasn dest et src
    
    i = 0;//commence posssition 0
   
    //temps que le nbr de char a prendre - 1('\0') sur src n est pas atteint et que src n est pas fini
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    //si src n as pas pu etre copier en entier, imncrement i pour savoir len de src
    while(src[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main()
{
    char dest[40];
    char src[] = "hello les copain, comment";
    printf("%d\n", ft_strlcpy(dest, src, 40));
    printf("%s\n", dest);
    return 0;
}
