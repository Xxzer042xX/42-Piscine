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
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	*tab;
	int	i;
	int size;

	if (ac == 3)
	{
		tab = NULL;
		size = ft_ultimate_range(&tab, atoi(av[1]), atoi(av[2]));
		if (size < 0)
			return (1);
		i = 0;
		while (i < size)
			printf("%d\n", tab[i++]);
		free(tab);
	}
	printf("\n");
	return (0);
}
*/