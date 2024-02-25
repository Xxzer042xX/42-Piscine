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

#include "ft_sort_in_tab.h"
#include <stdio.h>


int main(int ac, char **av)
{
	int	i;

	i = 0;
    if (ac != 7)
    {
        printf("Please provide 6 numbers as arguments.\n");
        return (0);
    }
	while(av[i])
	{
    	int arr[6];
    arr[0] = atoi(av[1]);
    arr[1] = atoi(av[2]);
    arr[2] = atoi(av[3]);
    arr[3] = atoi(av[4]);
    arr[4] = atoi(av[5]);
    arr[5] = atoi(av[6]);
    ft_sort_int_tab(arr, 6);
    printf("%d, %d, %d, %d, %d, %d\n", arr[0], 
    arr[1], arr[2], arr[3], arr[4], arr[5]);
	}
    return (0);
}
