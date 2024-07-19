/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:02:00 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/08 00:02:00 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Converts all lowercase characters in a string to uppercase, and returns the string
char    *ft_strupcase(char *str)
{
    char * orig;

    orig = str;
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            *str -= 32;
        str++;
    }
    return (orig);
}

/*
char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
    return (str);
}
*/