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
#include "ft.h"

int main(void)
{
    int *range;
    int i;

    range = ft_range(10, 5);
    i = 0;
    while (i < 5)
    {
        printf("%d\n", range[i]);
        i++;
    }
    return (0);
}