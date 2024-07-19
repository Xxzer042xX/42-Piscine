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

#include "ft.h"

int main(int ac, char **av)
{
    char *str;
    (void)ac;
    str = malloc(sizeof(char) * 4);
    if(str == NULL)
    {
        write(1, "error allocation\n", 17);
        exit(1);
    }
    ft_putstr(ft_strcpy(str, av[1]));
    write(1, "lol\n", 4);
    free(str);
    return(0);
}
