/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 00:01:04 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/07 00:01:04 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
    while (*str)
    {
        if((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
            str++;
        else
            return (0);
    }
    return (1);
}

/*
//Checks if the string contains only alphabetical characters, and returns 1 if it does, 0 if it doesn't
int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            i++;
        else
            return (0);
    }
    return (1);
}
*/
