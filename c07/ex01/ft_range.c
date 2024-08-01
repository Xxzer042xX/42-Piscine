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
int	*ft_range(int min, int max)
{
	int	*p_array;
	int	*array;

	if (min >= max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min));
	if (!array)
		return (NULL);
	p_array = array;
	while (min < max)
		*array++ = min++;
	return (p_array);
}
