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
#include<unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N", 1);
		return ;
	}
	write (1, "P", 1);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

/*
int	main(void)
{
	ft_is_negative(42);
	ft_putchar('\n');
	ft_is_negative(-42);
	ft_putchar('\n');
	ft_is_negative(0);
	ft_putchar('\n');
	return (0);
}
*/