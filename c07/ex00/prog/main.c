/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 13:16:13 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/10 13:16:13 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ft.h"

char    *strdup(const char *src);

int main(int ac, char **av)
{
    if(ac == 2)
    {
        printf("%s\n", ft_strdup(av[1]));
        free(ft_strdup(av[1]));
    }
    return (0);
}