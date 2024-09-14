/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:38:18 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/29 12:38:19 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	*start;
	int	*end;

	start = tab;
	end = tab + (size - 1);
	if (size <= 1)
		return ;
	while (start < end)
	{
		if (*start > *end)
			ft_swap(start, end);
		start++;
	}
	ft_sort_int_tab(tab, size - 1);
}
/*
#include <unistd.h>

int	main(void)
{
	int i;
	int	tab[5];

	tab[0] = 5;
	tab[1] = 9;
	tab[2] = 1;
	tab[3] = 2;
	tab[4] = 0;
	i = 0;
	ft_sort_int_tab(tab, 5);
	while (i < 5)
		write (1, &(char){tab[i++] + '0'}, 1);
	write (1, "\n", 1);
	return (0);
}
*/
