/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:45:54 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/07 18:45:54 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if the string contains only lowercase characters, and returns 1 if it does, 0 if it doesn't
int ft_str_is_lowercase(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            str++;
        else
            return (0);
    }
    return (1);
}

/*
int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return (0);
    }
    return (1);
}
*/