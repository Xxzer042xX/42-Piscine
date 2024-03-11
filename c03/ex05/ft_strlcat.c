/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:52:09 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 14:52:09 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned int k;

    i = 0;
    j = 0;
    k = 0;
    //Move i to the end of dest 
    while (dest[i] != '\0')
        i++;
    //Count the length of src
    while (src[j] != '\0')
        j++;
    //If size of dest is less than i, add size to j
    if (size <= i)
        j += size;
    //Else add i to j
    else
        j += i;
    //Add src to dest until the end of src or the end of dest
    while (src[k] != '\0' && i + 1 < size)
    {
        dest[i] = src[k];
        i++;
        k++;
    }
    dest[i] = '\0';
    return (j);
}
