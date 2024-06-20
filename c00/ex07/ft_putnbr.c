/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 06:08:24 by mdelmeni          #+#    #+#             */
/*   Updated: 2023/11/28 06:08:24 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Display all digits of a given integer using two's complement
void ft_putnbr(int nb)
{
    if (nb == -2147483648)
	{
        write(1, "-2147483648", 11);
	}
	else if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
		ft_putnbr(nb);
    }
    else if (nb < 10)
        write(1, &(char){nb + '0'}, 1);
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}
