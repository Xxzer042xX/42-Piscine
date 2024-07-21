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
    char *p_str;
    char *p_to_find;

    if (*to_find == '\0')
        return (str);
    // Parcours de la chaîne principale
    while (*str)
    {
        p_str = str;
        p_to_find = to_find;
        // Comparaison des caractères
        while (*p_str && *p_to_find && *p_str == *p_to_find)
        {
            p_str++;
            p_to_find++;
        }
        // Si toute la sous-chaîne a été trouvée
        if (*p_to_find == '\0')
            return (str);
        str++;
    }
    return (NULL);
}

/*
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
        //Syncronize the counter of the two strings
        while (str[i + j] == to_find[j] && to_find[j] != '\0')
            j++;
        //Condition for return the pointer to the first occurrence of to_find in str
        if (to_find[j] == '\0')
            return (&str[i]);
        i++;
    }
    return (0);
}
*/