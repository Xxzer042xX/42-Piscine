/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:21:20 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/08 00:21:20 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

char *ft_strlowcase(char *str);

int main(int ac, char **av)
{
    char *str;

    str = av[1];
    ft_strlowcase(str);
    printf("%s", str);
    return (0);
}