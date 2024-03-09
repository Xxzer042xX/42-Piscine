/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:14:07 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/29 17:14:07 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft.h"

char    *ft_strcpy(char *dest, char *src);
void    ft_putstr(char *str);

int main(int ac, char **av)
{
    char *pt_dest;
    char *pt_src;
    
    pt_dest = malloc(sizeof(char) * 100);
    pt_src = av[1];
    ft_putstr(ft_strcpy(pt_dest, pt_src));
    return (0);
}