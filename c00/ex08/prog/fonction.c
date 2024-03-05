/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:55:35 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/29 11:55:35 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
    while (str[pos] <= '9') {
        i_love_recursive(str, n, pos + 1);
        str[pos]++;
    }
}
