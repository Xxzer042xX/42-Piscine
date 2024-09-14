/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:59:09 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/17 01:59:09 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns 1 if the input is a prime number, 0 if not
int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while ((i * i) < nb)
	{
		if ((nb % i) == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*
#include <stdlib.h>

int	main(void)
{
	printf("%d\n", ft_is_prime(6));
	return (0);
}
*/
