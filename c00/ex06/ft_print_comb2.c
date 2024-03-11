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

//Display a character on the standard output.
void ft_putchar(char c)
{
	write(1, &c, 1);
}

//Display all different combinations of two-digit numbers in ascending order
void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	//Display first combination
	while (i <= 98)
	{
		j = i + 1;
		//Display second combination
		while (j <= 99)
		{
			ft_putchar(i / 10 + 48);
			ft_putchar(i % 10 + 48);
			ft_putchar(' ');
			ft_putchar(j / 10 + 48);
			ft_putchar(j % 10 + 48);
			if (i != 98)
				write(1,", ", 2);
			j++;
		}
		i++;
	}
}
