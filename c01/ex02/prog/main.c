/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 03:06:51 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/25 03:06:51 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"
#include <unistd.h>

void	ft_putnbr(int nb);
void    ft_putchar(char c);
void	ft_swap(int *a, int *b);

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
