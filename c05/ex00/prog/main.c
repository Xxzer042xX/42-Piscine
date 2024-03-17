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

#include "ft.h"
#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void)
{
    ft_iterative_factorial(5);
    printf("%d", ft_iterative_factorial(5));
    return (0);
}
