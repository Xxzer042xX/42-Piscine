/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:49:05 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/11 19:49:05 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Convert a string to an integer
int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == 32 || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		result = (result * 10) + (*str++ - '0');
	return (result * sign);
}
/*
#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648 && write (1, "-2147483648", 11))
		return ;
	if (nb < 0 && write (1, "-", 1))
		nb *= -1;
	if (nb >= 10)
		ft_putnbr(nb / 10);
	write (1, &(char){(nb % 10) + '0'}, 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putnbr(ft_atoi(av[1]));
		write (1, "\n", 1);
		ft_putnbr(atoi(av[1]));
	}
	write (1, "\n", 1);
	return (0);
}
*/