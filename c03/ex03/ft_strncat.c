/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:44:34 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 14:44:34 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Concatenates n characters from src to dest and returns dest
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char *d;

    d = dest;
    while (*d)
        d++;
    while (*src && nb)
    {
        *d++ = *src++;
        nb--;
    }
    *d = '\0';
    return (dest);
}
