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

#include <stdio.h>
#include <stdlib.h>

// Copies the string given as argument into a new string.
char *ft_strdup(char *src)
{
    char *dest;
    int i = 0; // Initialize i to 0

    // Calculates the length of the string.
    while (src[i] != '\0')
        i++;

    // Allocates memory for the new string including the null terminator.
    dest = malloc(sizeof(char) * (i + 1)); // Allocate memory for i characters + null terminator

    // If the allocation fails, the function returns NULL.
    if (dest == NULL)
        return NULL;
            
    i = 0;
    // Copies the string given as argument into a new string.
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Null-terminate the new string
    return dest;
}
