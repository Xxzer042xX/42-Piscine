/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:37:34 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/31 20:37:34 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//Copies the string given as argument into a new string.
char    *ft_strdup(char *src)
{
    char    *dest;
    int     i;

    //Calculates the length of the string.
    while (src[i] != '\0')
        i++;

    //Allocates memory for the new string.
    dest = malloc(sizeof(char) * i);

    //If the allocation fails, the function returns NULL.
    if (dest == NULL)
        return (NULL);
            
    i = 0;
    //Copies the string given as argument into a new string.
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

