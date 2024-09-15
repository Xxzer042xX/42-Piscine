/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:57:04 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/17 20:57:04 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(int ac, char **av)
{
	ac--;
	if (ac > 1)
	{
		while (ac > 0)
		{
			ft_putstr(av[ac--]);
			write (1, "\n", 1);
			sleep (1);
		}
	}
	return (0);
}
