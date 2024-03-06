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

#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char src[] = "abcd";
    char dest[] = "efgh";
    ft_strncpy(dest, src, 3);
    printf("%s", dest);
    return (0);
}