/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 00:14:29 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/24 00:14:29 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Display N if n is negative, P if n is positive or 0
void	ft_is_negative(int n)
{
	if (n < 0 && write (1, "N", 1))
		return ;
	write (1, "P", 1);
}
/*
int	main(void)
{
	ft_is_negative(42);
	write (1, "\n", 1);
	ft_is_negative(-42);
	write (1, "\n", 1);
	ft_is_negative(0);
	write (1, "\n", 1);
	return (0);
}
*/