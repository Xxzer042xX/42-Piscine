/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:46:08 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/17 01:46:08 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns the square root of nb if it exists, 0 otherwise
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb / 2 || nb == 1)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
