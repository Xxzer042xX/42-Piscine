/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:07:44 by mdelmeni          #+#    #+#             */
/*   Updated: 2023/11/19 22:07:44 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Return the length of a string 
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}
/*
#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648 && write (1, "-2147483648", 1))
		return ;
	if (nb < 0 && write (1, "-", 1))

		nb *= -1;
	if (nb >= 10)
		ft_putnbr(nb /10);
	write (1, &(char){nb % 10 + '0'}, 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_strlen(av[1]);
	ft_putnbr(ft_strlen(av[1]));
	write (1, "\n", 1);
	return (0);
}
*/
