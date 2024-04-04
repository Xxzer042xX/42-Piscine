/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:22:28 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/04/02 16:22:28 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Allocates memory for an array of integers containing all values between min and max.
int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *tab;

    i = 0;

    // If min is greater than or equal to max, set range to NULL and return 0.
    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    else
    {
        // Allocate memory for an array of integers containing all values between min and max.
        tab = malloc(sizeof(int) * (max - min));

        // If the allocation fails, set range to NULL and return -1.
        if (tab == NULL)
        {
            *range = NULL;
            return (-1);
        }
    }

    // Fill the array with all values between min and max.
    while (min < max)
    {
        tab[i] = min;
        i++;
        min++;
    }
    *range = tab;
    return (i);
}
