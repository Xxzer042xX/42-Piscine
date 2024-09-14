/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:31:04 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/07 18:31:04 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function to check if a string contains only numeric characters
int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/*
#include <unistd.h>

int	main(void)
{
	char *str;

	str = "4";
	write(1, &(char){ft_str_is_numeric(str) + '0'}, 1);
	return (0);
}
*/
