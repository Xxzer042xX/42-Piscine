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

#include "ft.h"

int	main(void)
{
	int	arr[6];
	int	size;
	int	i;

	i = 0;
	size = 6;
	while (i < size)
	{
		arr[i] = i + 1;
		i++;
	}
	
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
