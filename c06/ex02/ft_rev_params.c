/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:57:04 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/17 20:57:04 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

int     main(int ac, char **av)
{
    int i;

    i = ac - 1;
    if (ac > 1)
    {
        while(i > 0)
        {
            ft_putstr(av[i]);
            write(1, "\n", 1);
            i--;
        }
    }
    return (0);
}