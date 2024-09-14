/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                  :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 06:04:15 by mdelmeni          #+#    #+#             */
/*   Updated: 2023/11/25 06:04:15 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	*start;
	int	*end;
	int	temp;

	if (tab == (void *)0 || size <= 0)
		return ;
	start = tab;
	end = tab + (size -1);
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
/*
#include <unistd.h>

int	main(void)
{
	int	i;
	int	tab[5];

	i = 0;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	ft_rev_int_tab(NULL, 5);
	while (i <  5)
	{
		write (1, &(char){tab[i] + '0'}, 1);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
*/