/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:53:58 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/07 18:53:58 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if the string contains only uppercase characters, and returns 1 if it does, 0 if it doesn't
int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else
            return (0);
    }
    return (1);
}