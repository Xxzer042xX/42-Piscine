/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 05:54:21 by mdelmeni          #+#    #+#             */
/*   Updated: 2023/11/28 05:54:21 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Display all different combinations of two-digit numbers in ascending order
void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write (1, &(char){a / 10 + '0'}, 1);
			write (1, &(char){a % 10 + '0'}, 1);
			write (1, " ", 1);
			write (1, &(char){b / 10 + '0'}, 1);
			write (1, &(char){b % 10 + '0'}, 1);
			if (a < 98)
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*
int main(void)
{
    ft_print_comb2();
    write (1, " \n", 1);
    return (0);
}
*/