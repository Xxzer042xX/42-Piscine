/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:18:06 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/08 00:18:06 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Converts all uppercase characters in a string to lowercase, and returns the string
char *ft_strlowcase(char *str)
{
    char *orig;

    orig = str;
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
            *str += 32;
        str++;
    }
    return (orig);
}

/**
char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}
*/