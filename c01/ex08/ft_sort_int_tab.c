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
#include <unistd.h>

//Swap the value of two pointers with help of a temporary variable
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

//Sort an array of integers in ascending order
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	pos;
	int	len;

	i = 0;
	len = size - 1;
	//while all the elements from array are not checked with each other
	while (i < len)
	{
		pos = 0;
		//while pos is not compared with all elements
		while (pos < len)
		{
			if (tab[pos] > tab[pos + 1])
			{
				ft_swap(&tab[pos], &tab[pos + 1]);
			}
			pos++;
		}
		i++;
	}
}

