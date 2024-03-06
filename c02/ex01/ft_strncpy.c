/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 08:56:33 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/06 08:56:33 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned    int i;

    i = 0;
    while (src[i] != '\0' && i < n)//temps que n as pas atteint le le nombr de char a prendre sur src
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
/*
int main()
{
    char src[] = "abcd";
    char dest[] = "efgh";
    ft_strncpy(dest, src, 3);
    printf("%s", dest);
    return 0;
}
*/