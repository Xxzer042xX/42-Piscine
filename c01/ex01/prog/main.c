/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 21:15:55 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/24 21:15:55 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_ultimate_ft(int *********nbr);
void	ft_putnbr(int nb);
void    ft_putchar(char c);

int	main(void)
{
	int	a;
	int	*b;
	int	**c;
	int	***d;
	int	****e;
	int	*****f;
	int	******g;
	int	*******h;
	int	********i;
	int	*********j;

	a = 0;
	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	i = &h;
	j = &i;
	ft_putnbr(a);
	ft_putchar('\n');
	ft_ultimate_ft(j);
	ft_putnbr(a);
	ft_putchar('\n');
	return (0);
}
