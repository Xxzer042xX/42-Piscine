/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 13:16:13 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/10 13:16:13 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft.h"

int main(int ac, char **av)
{
    int *range;
    int i;
    int min;
    int max;

    if (ac == 3)
    {
        min = atoi(av[1]);
        max = atoi(av[2]);
        i = ft_ultimate_range(&range, min, max);
        if (i == -1)
            return (-1);
        while (i-- > 0)
            printf("%d\n", range[i]);
    }
    return (0);
}
