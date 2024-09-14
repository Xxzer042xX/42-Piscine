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
	int	*range;
	int	*p_range;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	if (!(range))
		return (NULL);
	p_range = range;
	while (min < max)
		*p_range++ = min++;
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	min;
	int	max;

	min = -2;
	max = 5;
	tab = ft_range(min, max);
	if (tab == NULL)
		return (1);
	while (min++ < max)
		printf("%d\n", *tab++);
	return (0);
}
*/