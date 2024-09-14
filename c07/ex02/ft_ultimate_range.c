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

// Function to create an array of integers from `min` to `max - 1`
int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*tab;

	len = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (!(tab))
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
		tab[len++] = min++;
	*range = tab;
	return (len);
}
