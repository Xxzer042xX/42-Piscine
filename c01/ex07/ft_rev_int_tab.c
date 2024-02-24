/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 06:04:15 by mdelmeni          #+#    #+#             */
/*   Updated: 2023/11/25 06:04:15 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		tmp = tab[start];
		tab[start] = tab[end];
		tab[end] = tmp;
		start++;
		end--;
	}
}

int	main(void)
{
	int	arr[6];
	int	size;
	int	i;

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	arr[5] = 6;
	size = 6;
	i = 0;
	ft_rev_int_tab(arr, size);
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
