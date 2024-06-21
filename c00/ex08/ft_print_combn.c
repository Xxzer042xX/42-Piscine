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

// Main function to generate and print all combinations of n digits
void ft_print_combn(int n)
{
    int pos;
    char current;
    char str[10];

    pos = 0;
    current = '0';

    // Recursive function to generate combinations
    void generate_combinations(int pos, char current)
    {
        if (pos == n)
        {
            write(1, str, n);
            if (str[0] != '9' - n + 1)
                write(1, ", ", 2);
            return;
        }
        str[pos] = current;
        if (current <= '9')
        {
            generate_combinations(pos + 1, current + 1);
            if (current + 1 <= '9')
                generate_combinations(pos, current + 1);
        }
    }
    generate_combinations(pos, current);
}