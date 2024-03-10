/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:52:34 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 14:52:34 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int main(void)
{
    char dest[] = "Hello";
    char src[] = " World";
    printf("%d\n", ft_strlcat(dest, src, 3));
    return (0);
}
