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
#include <stdlib.h>

int main(void)
{
    char dest[20] = "Hello";//6
    char src[8] = " World!";//8
    printf("%d\n", ft_strlcat(dest, src, 20));
    printf("%s\n", dest);
    return (0);
}
