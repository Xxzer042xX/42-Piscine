/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:13:01 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/01/20 21:13:01 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Affiche une combinaison donnée
void    write_combination(char *str, int n)
{
    int i;

    i = 0;
    while (i < n) {
        write(1, &str[i], 1);
        i++;
    }
    if (str[0] != '9' - n + 1)
        write(1, ", ", 2);
}

// Génère récursivement les combinaisons
void    print_combinations(char *str, int n, int pos)
{
    if (pos == n) {
        write_combination(str, n);
        return;
    }

    if (pos == 0)
        str[pos] = '0';
    else
        str[pos] = str[pos - 1] + 1;
    while (str[pos] <= '9') {
        print_combinations(str, n, pos + 1);
        str[pos]++;
    }
}


void    ft_print_combn(int n)
{
    char str[10];

    if (n > 0 && n < 10)
        print_combinations(str, n, 0);
}
/*
int main(void)
{
    ft_print_combn(2);
    return (0);
}
*/