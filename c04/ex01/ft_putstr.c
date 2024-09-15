/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:22:29 by mdelmeni          #+#    #+#             */
/*   Updated: 2023/11/19 21:22:29 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Write a string char by char with the write function on the standard output
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

/*
int	main(int ac, char **av)
{
	if (ac == 2)
		ft_putstr(av[1]);
		write (1, "\n", 1);
	return (0);
}
*/