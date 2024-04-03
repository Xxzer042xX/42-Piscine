/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:11:53 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/04/03 18:11:53 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strjoin(int size, char **strs, char *sep)
{
    int     i;
    int     j;
    int     k;
    int     len;
    char    *str;

    i = 0;
    len = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j])
            j++;
        len += j;
        i++;
    }
    len += (size - 1) * sep;
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (NULL);
    i = 0;
    k = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j])
            str[k++] = strs[i][j++];
        j = 0;
        while (sep[j] && i < size - 1)
            str[k++] = sep[j++];
        i++;
    }
    str[k] = '\0';
    return (str);
}