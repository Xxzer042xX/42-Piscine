/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:49:03 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 14:49:03 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;

    if (to_find[0] == '\0')
        return (str);
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] == to_find[j] && to_find[j] != '\0')
            j++;
        if (to_find[j] == '\0')
            return (&str[i]);
        i++;
    }
    return (0);
}
