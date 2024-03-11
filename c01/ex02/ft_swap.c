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
