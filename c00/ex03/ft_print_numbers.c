/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:53:31 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/23 23:53:31 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    int i;

    i = 48;
    while (i <= 57)
    {
        ft_putchar(i);
        i++;
    }  
}
/*
int main(void)
{
    ft_print_numbers();
    return(0);
}
*/