/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 03:29:51 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/25 03:29:51 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(void)
{
	int	a;
	int	b;
	int	division;
	int	modulo;

	a = 10;
	b = 2;
	ft_div_mod(a, b, &division, &modulo);
	ft_putstr("le nombre a =\t");
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putstr("le nombre b =\t");
	ft_putnbr(b);
	ft_putchar('\n');
	ft_putstr("division a/b =\t");
	ft_putnbr(division);
	ft_putchar('\n');
	ft_putstr("modulo a de b = ");
	ft_putnbr(modulo);
	ft_putchar('\n');
	return (0);
}