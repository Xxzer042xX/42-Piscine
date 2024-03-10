/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:33:50 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 14:33:50 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int main(void)
{
    char dest[] = "Hello";
    char src[] = " World";
    printf("%s\n", ft_strcat(dest, src));
    return (0);
}
