/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:27:39 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/08 00:27:39 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Capitalizes the first letter of each word in a string, and returns the string.
//if other charcater is uppercase, it will be converted to lowercase
char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        //While the character is a letter
        while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            //If the character is lowercase
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                //If the character is the first of the string, or the previous character is not a letter, not a number, str[i] will be converted to uppercase
                if((i == 0|| str[i - 1] < 'a' || str[i - 1] > 'z') && (str[i - 1] < 'A' || str[i - 1] > 'Z') && (str[i -1] < '0' || str[i - 1] > '9'))
                    str[i] =  str[i] - 32;
            }
            //If the character is uppercase
            else
            {
                //If the character is not the first of the string, and the previous character is a letter, or a number, str[i] will be converted to lowercase
                if((i > 0 && str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= 'A' && str[i - 1] <= 'Z') || (str[i - 1] >= '0' && str[i - 1] <= '9'))
                    str[i] = str[i] + 32;
            }
            i++;
        }
        i++;
    }
    return (str);
}
