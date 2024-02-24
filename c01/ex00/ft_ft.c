/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 01:20:22 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/24 01:20:22 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_ft(int *nbr)
{
    *nbr =  42;
}
/*
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb = -nb;//retourne l operateur
	}
	else if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int main(void)
{
    int i;
    int *ft;

    i = 0;
    ft = &i;

    ft_putnbr(i);
    ft_putchar('\n');
    ft_ft(ft);
    ft_putnbr(i);
    ft_putchar('\n');
    return (0);
}
*/