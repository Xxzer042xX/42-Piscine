/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:20:31 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/07 19:20:31 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if the string contains only printable characters, and returns 1 if it does, 0 if it doesn't
int ft_str_is_printable(char *str)
{
    while (*str)
    {
        if (*str >= 32 && *str <= 126)
        {
            str++;
        }
        else
            return (0);
    }
    return (1);
}

/*
int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] <= 126)
        {
            i++;
        }
        else
            return (0);
    }
    return (1);
}
*/