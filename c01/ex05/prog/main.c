/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 03:56:56 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/25 03:56:56 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
void    ft_putchar(char c);

int	main(int ac, char **av)
{
	if(ac == 2)
		ft_putstr(av[1]);
	ft_putchar('\n');
	return (0);
}
