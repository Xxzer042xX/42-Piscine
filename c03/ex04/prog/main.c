/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:49:17 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 14:49:17 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int main(void)
{
    char str[] = "abdepjfejjf";
    char to_find[] = "epj";
    printf("%s\n", ft_strstr(str, to_find));
    return (0);
}
