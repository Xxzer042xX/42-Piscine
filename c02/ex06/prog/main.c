/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:27:56 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/07 19:27:56 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void ft_putchar(char c);
int ft_str_is_printable(char *str);

int main(int ac, char **av)
{
    ft_putchar(ft_str_is_printable(av[1]));
    return (0);
}