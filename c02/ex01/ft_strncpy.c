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


//Copies the n first characters of src to dest, and returns the value of dest
char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned    int i;

    i = 0;
    //Copy src to dest until the end of src or until n
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    //If n is greater than the length of src, fill the rest of dest with '\0'
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
