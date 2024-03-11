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

void	ft_sort_int_tab(int *arr, int size);
void	ft_putstr(int *tab, int size);

int	main(void)
{
	int	tab[] = {-420, 24, 12, 7, 0};
	int	size = 5;

	ft_sort_int_tab(tab, size);
    ft_putstr(tab, size);
	return (0);
}

