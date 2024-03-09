/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:08:01 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 08:08:01 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
    char dest[40];
    char src[] = "hello les copain, comment";
    printf("%d\n", ft_strlcpy(dest, src, 40));
    printf("%s\n", dest);
    return (0);
}
