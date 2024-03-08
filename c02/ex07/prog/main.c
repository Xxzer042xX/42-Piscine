/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:09:22 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/08 00:09:22 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#include <stdio.h>

int ft_strupcase(char *str);

int        main(int ac, char **av)
{
    char *str;

    str = av[1];
    ft_strupcase(str);
    printf("%s", str);
    return (0);
}