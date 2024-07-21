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

#include <unistd.h>

//Reverse the order of the elements of an array of integers
void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	*start;
	int	*end;

	start = tab;
	end = tab + (size - 1);
	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
