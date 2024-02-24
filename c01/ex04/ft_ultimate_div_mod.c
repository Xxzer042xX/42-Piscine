/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 03:33:01 by mdelmeni          #+#    #+#             */
/*   Updated: 2023/11/19 03:33:01 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = temp_a / *b;
	*b = temp_a % *b;
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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	
}


int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 2;
	ft_putstr("a =\t");
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putstr("b =\t");
	ft_putnbr(b);
	ft_ultimate_div_mod(&a, &b);
	ft_putchar('\n');
	ft_putstr("ultimate!\n");
	ft_putstr("a / b =\t");
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putstr("a modulo de b =\t");
	ft_putnbr(b);
	ft_putchar('\n');
	return (0);
}
*/