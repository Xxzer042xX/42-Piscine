/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:10:46 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 14:10:46 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char s1[] = "bcd";
    char s2[] = "abc";
    printf("%d\n", ft_strcmp(s1, s2));
    return (0);
}
