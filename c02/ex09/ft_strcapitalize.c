/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:27:39 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/08 00:27:39 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                if((i == 0|| str[i - 1] < 'a' || str[i - 1] > 'z') && (str[i - 1] < 'A' || str[i - 1] > 'Z') && (str[i -1] < '0' || str[i - 1] > '9'))
                    str[i] =  str[i] - 32;
            }
            else
            {
                if((i > 0 && str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= 'A' && str[i - 1] <= 'Z') || (str[i - 1] >= '0' && str[i - 1] <= '9'))
                    str[i] = str[i] + 32;
            }
            i++;
        }
        i++;
    }
    return (str);
}
/*
int main(int ac, char **av)
{
    if(ac == 2)
    {
    printf("%s",ft_strcapitalize(av[1]));
    }
    return 0;
}
*/
