/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:33:07 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/23 23:33:07 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_alpabet(void)
{
    char letter;

    letter = 97;
    while (letter <= 122)
    {
        write(1, &letter, 1);
        letter++;
    }
    
}
/*
int main(void)
{
    ft_print_alpabet();
    return(0);
}
*/