/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 03:57:05 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/25 03:57:05 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(int *tab, int size)
{
	int i;
	
	i = 0;
	while (i != size)
	{
		ft_putnbr(&tab[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char c;
	if (nb < 0)
	{
			ft_putchar('-');
		if (nb == -2147483648)
		{
				ft_putchar('2');
			nb = -147483648;
		}
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb < 10)
	{
		c = nb + '0';
		ft_putchar(c);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}