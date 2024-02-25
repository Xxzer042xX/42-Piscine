/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 03:56:56 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/25 03:56:56 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rev_in_tab.h"

int	main(void)
{
	int	arr[6];
	int	size;
	int	i;

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	arr[5] = 6;
	size = 6;
	i = 0;
	ft_rev_int_tab(arr, size);
	while (i < size)
	{
		ft_putnbr(arr[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
