/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:53:31 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/23 23:53:31 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Display all digits in ascending order
void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		write(1, &(char){i + '0'}, 1);
		i++;
	}
}
