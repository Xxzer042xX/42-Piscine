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
    write(1, str, n);
    if (str[0] != '9' - n +
     1)
        write(1, ", ", 2);
}

//Generate all combinations of n characters from 0 to 9
void    i_love_recursive(char *str, int n, int pos)
{
    if (pos == n)
    {
        ft_put_str(str, n);
        return;
    }
    if (pos == 0)
        str[pos] = '0';
    else
        str[pos] = str[pos - 1] + 1;
    while (str[pos] <= '9') 
    {
        i_love_recursive(str, n, pos + 1);
        str[pos]++;
    }
}

void    ft_print_combn(int n)
{
    char str[10];

    if (n > 0 && n < 10)
        i_love_recursive(str, n, 0);
}
