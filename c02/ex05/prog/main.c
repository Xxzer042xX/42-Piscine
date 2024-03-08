/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:12:42 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/07 19:12:42 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void ft_putchar(char c);
int ft_str_is_uppercase(char *str);

int main(int ac, char **av)
{
    ft_putchar('0' + ft_str_is_uppercase(av[1]));
    return (0);
}