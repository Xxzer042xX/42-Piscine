/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:33:35 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 14:33:35 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Concatenates src to dest and returns dest
char *ft_strcat(char *dest, char *src)
{
    char *pt_dest;
    char *pt_src;

    pt_src = src;
    pt_dest = dest;
    while (*pt_dest != '\0')
        pt_dest++;
    while (*pt_src != '\0')
    {
        *pt_dest = *pt_src;
        pt_dest++;
        pt_src++;
    }
    return (dest);
}
