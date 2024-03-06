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
