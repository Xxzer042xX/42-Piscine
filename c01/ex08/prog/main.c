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

void    ft_sort_in_tab(tab, size);
void    ft_putstr(tab, size);

int	main(void)
{
	int	tab[] = {42, 24, 12, 89, 5};
	int	size = 5;

	ft_sort_in_tab(tab, size);
    ft_putstr(tab, size);
	return (0);
}

