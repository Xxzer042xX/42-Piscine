/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:16:44 by mdelmeni          #+#    #+#             */
/*   Updated: 2023/11/13 06:16:44 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Assigne 42 to the value of the pointer
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
/*
#include <unistd.h>

int	main(void)
{
	int nb;

	nb = 0;
	int	*p1 = &nb;
	int	**p2 = &p1;
	int	***p3 = &p2;
	int ****p4 = &p3;
	int	*****p5 = &p4;
	int	******p6 = &p5;
	int	*******p7 = &p6;
	int	********p8 = &p7;
	int	*********p9 = &p8;
	write (1, &(char){nb + '0'}, 1);
	write (1, "\n", 1);
	ft_ultimate_ft(p9);
	write (1, &(char){nb / 10 + '0'}, 1);
	write (1, &(char){nb % 10 + '0'}, 1);
	write (1, "\n", 1);
	return (0);
}
*/