/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:49:05 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/11 19:49:05 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//Convert a string to an integer
int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 0;
    result = 0;
    //Move to the first non-space character or sign character
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r') || str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign += 1;
        i++;
    }
    //Evaluate the sign is positive or negative
    if (sign % 2 != 0)
        sign = - 1;
    else
        sign = 1;
    //Generate the number
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}