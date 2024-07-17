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
    int i;
    
    i = 0;
    while (*src)
    {
        *dest = *src;
        src++;
        dest++;
        i++;
    }
    *dest = '\0';
    src -= i;
    dest -= i;
    return (dest);
}

int main(int ac, char **av)
{
    (void)ac;
    char *pt_dest;
    char *pt_src;
    
    pt_dest = malloc(sizeof(char) * 4);
    pt_src = av[1];
    ft_strcpy(pt_dest, pt_src);
    write(1, str, 3)
    return (0);
}