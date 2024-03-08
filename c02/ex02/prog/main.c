/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:24:15 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/07 18:24:15 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int ft_str_is_alpha(char *str);
void ft_putchar(char c);

int main(int ac, char **av)
{
    ft_putchar('0' + ft_str_is_alpha(av[1]));
    return (0);
}  