/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 01:20:22 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/24 01:20:22 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Assign 42 to the pointer's value
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
#include <unistd.h>
#include <stdlib.h>

int	main(void)
{
	int *nbr;
	nbr = malloc(sizeof(char) * 10);

	*nbr = 0;
	write (1, &(char){*nbr + '0'}, 1);
	write (1, "\n", 1);
	ft_ft(nbr);
	write (1, &(char){*nbr / 10 + '0'}, 1);
	write (1, &(char){*nbr % 10 + '0'}, 1);
	return (0);
}
*/