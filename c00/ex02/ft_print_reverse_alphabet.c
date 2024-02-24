/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:50:49 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/23 23:50:49 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char letter;

    letter = 'z';
    while (letter >= 'a')
    {
        write(1, &letter, 1);
        letter--;
    }   
}
