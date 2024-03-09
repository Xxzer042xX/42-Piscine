/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:51:58 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/08 11:51:58 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned i;
    
    i = 0;
   
    //temps que le nbr de char a prendre - 1('\0') sur src n est pas atteint et que src n est pas fini
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    //si src n as pas pu etre copier en entier, imncrement i pour savoir len de src
    while(src[i] != '\0')
    {
        i++;
    }
    return (i);
}
