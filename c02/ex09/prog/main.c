/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:06:55 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 08:06:55 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

char *ft_strcapitalize(char *str);

int main(int ac, char **av)
{
    if(ac == 2)
        printf("%s",ft_strcapitalize(av[1]));
    return 0;
}
