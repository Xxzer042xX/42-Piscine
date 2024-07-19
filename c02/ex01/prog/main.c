/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 23:11:06 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/06 23:11:06 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int main(int ac, char **av)
{
    char *dest;
    unsigned int n;

    if (ac == 3)
    {
        n = (unsigned int)atoi(av[2]);
        if (n == 0)
        {
            write(1, "Invalid length\n", 15);
            return (1);
        }
        dest = (char *)malloc(sizeof(char) * 50);
        if (dest == NULL)
        {
            write(1, "Error allocating memory\n", 24);
            return (1);
        }
        ft_putstr(ft_strncpy(dest, av[1], n));
        free(dest);
    }
    return (0);
}
