/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:09:32 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/29 17:09:32 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

//Copies the value of src to dest, and returns the pointer of dest
char    *ft_strcpy(char *dest, char *src)
{
    char *d;

    d = dest;
    while (*src)
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return (d);
}
