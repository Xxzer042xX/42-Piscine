/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:32:43 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/04/01 15:32:43 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Returns an array of integers containing all values between min and max.
int *ft_range(int min, int max)
{
    int *array;
    int i;

    i = 0;    
    // If min is greater than or equal to max, return NULL.
    if (min >= max)
        return (NULL);
    else
    {
        // Allocates memory for the range array.
        array = malloc(sizeof(int) * (max - min));

        // If the allocation fails, return NULL.
        if (array == NULL)
            return (NULL);
    }

    // Fills the range array with values from min to max.
    while (min < max)
    {
        array[i] = min;
        i++;
        min++;
    }
    return (array);
}
