/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 03:07:42 by mdelmeni          #+#    #+#             */
/*   Updated: 2023/11/19 03:07:42 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assign the result of the division of a by b to the int pointed by div
and assign the result of the modulo of a by b to the int pointed by mod
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <unistd.h>

int	main(void)
{
	int a;
	int b;
	int	div;
	int mod;

	a = 10;
	b = 2;

	div = 0;
	mod = 0;

	ft_div_mod(a, b, &div, &mod);
	write (1, &(char){div + '0'}, 1);
	write (1, "\n", 1);
	write (1, &(char){mod + '0'}, 1);
	write (1, "\n", 1);
	return (0);
}
*/
