/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:29:41 by mdelmeni          #+#    #+#             */
/*   Updated: 2023/11/13 16:29:41 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Swap the value of two pointers with help of a temporary variable
void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
#include <unistd.h>

int	main(void)
{
	int	a;
	int b;
	int *p_a;
	int	*p_b;

	a = 1;
	b = 2;
	p_a = &a;
	p_b = &b;
	write (1, &(char){*p_a + '0'}, 1);
	write (1, &(char){*p_b + '0'}, 1);
	ft_swap(p_a, p_b);
	write (1, "\n", 1);
	write (1, &(char){*p_a + '0'}, 1);
	write (1, &(char){*p_b + '0'}, 1);
	return (0);
}
*/
