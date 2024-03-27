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

//Copies the value of src to dest, and returns the pointer of dest
char    *ft_strcpy(char *dest, char *src)
{
    int i;
    
    i = 0;
    while (*src)
    {
        *dest = *src;
        src++;
        dest++;
        i++;
    }
    src -= i;
    dest -= i;
    return (dest);
}