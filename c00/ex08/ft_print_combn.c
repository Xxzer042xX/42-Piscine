/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:58:33 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/29 11:58:33 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Display n characters from str and a comma and a space if str[0] is not 9 - n + 1
void    ft_put_str(char *str, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        write(1, &str[i], 1);
        i++;
    }
    if (str[0] != '9' - n + 1)
        write(1, ", ", 2);
}

//Generate all combinations of n characters from 0 to 9
void    i_love_recursive(char *str, int n, int pos)
{
    //If the position is the same as n, display the string
    if (pos == n)
    {
        ft_put_str(str, n);
        return;
    }
    //If the position is 0, set the character to 0
    if (pos == 0)
        str[pos] = '0';
    //Else the position is not 0, set the character to the previous character + 1
    else
        str[pos] = str[pos - 1] + 1;
    //While the character is less than or equal to 9, call the function recursively and increment the character
    while (str[pos] <= '9') {
        i_love_recursive(str, n, pos + 1);
        str[pos]++;
    }
}

//Call the recursive function with a string of n characters
void    ft_print_combn(int n)
{
    char str[10];

    if (n > 0 && n < 10)
        i_love_recursive(str, n, 0);
}
