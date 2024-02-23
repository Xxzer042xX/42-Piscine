/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 00:14:29 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/24 00:14:29 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_is_negative(int n)
{
    if(n < 0)
        ft_putchar('N');
    else
        ft_putchar('P');
}
/*
int main(int ac, char **av)
{
    int n;

    n = 0;
    if(ac == 2)
    {
        n = atoi(&av[1][0]);
        ft_is_negative(n);
    }
    return(0);
}
*/