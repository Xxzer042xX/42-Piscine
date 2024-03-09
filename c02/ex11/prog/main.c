/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:08:51 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 08:08:51 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void ft_putstr_non_printable(char *str);

int main(void)
{
    char str[] = "Coucou\ntu\tvas\\bien ?";
    ft_putstr_non_printable(str);
    return (0);
}
