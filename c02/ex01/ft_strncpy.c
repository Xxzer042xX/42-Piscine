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

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned    int i;

    i = 0;
    //temps que le nbr de char a prendre sur src n est pas atteint et que src n est pas fini
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    //si src ne contenais rien ou pas le nbr d emplcemenmt allouer, remplir la derneire case de dest par \0
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
