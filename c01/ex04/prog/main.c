/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 03:56:56 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/25 03:56:56 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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
