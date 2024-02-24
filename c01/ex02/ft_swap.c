/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:29:41 by mdelmeni          #+#    #+#             */
/*   Updated: 2023/11/13 16:29:41 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
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
		nb = -nb;
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

int	main(void)
{
	int	f;
	int	g;

	f = 4;
	g = 6;
	ft_putnbr(f);
	ft_putchar('\n');
	ft_putnbr(g);
	ft_putchar('\n');
	ft_swap (&f, &g);
	write(1, "Swap !!\n", 8);
	ft_putnbr(f);
	ft_putchar('\n');
	ft_putnbr(g);
	return (0);
}
*/