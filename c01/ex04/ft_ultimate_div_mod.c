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

// Performs integer division and modulus of *a by *b
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = temp_a / *b;
	*b = temp_a % *b;
}
/*
#include <unistd.h>

int	main(void)
{
	int a;
	int b;

	a = 10;
	b = 2;
	ft_ultimate_div(&a, &b);
	write (1, &(char){a + '0'}, 1);
	write (1, "\n", 1);
	write (1, &(char){b + '0'}, 1);
	write (1, "\n", 1);
	return (0);
}
*/