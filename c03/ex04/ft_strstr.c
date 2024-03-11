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

//Searches for the first occurrence of *to_find in *str. Returns a pointer to the located string, or a null pointer if the string is not found
char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    //If to_find is an empty string, return str
    if (to_find[0] == '\0')
        return (str);
    //While str[i] isn't on the end of the string
    while (str[i] != '\0')
    {
        j = 0;
        //adds the value of j to srt[i] to move this in str without changing the value of i, time str[i] is equal to to_find[j] and to_find[j] is not at the end of the string
        while (str[i + j] == to_find[j] && to_find[j] != '\0')
            j++;
        //Condition for return the pointer to the first occurrence of to_find in str
        if (to_find[j] == '\0')
            return (&str[i]);
        i++;
    }
    return (0);
}
