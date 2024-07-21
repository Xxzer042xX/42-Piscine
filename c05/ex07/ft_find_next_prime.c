/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 02:16:52 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/17 02:16:52 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns the next prime number after the input
int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (2);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			nb++;
			i = 2;
		}
		else
			i++;
	}
	return (nb);
}
