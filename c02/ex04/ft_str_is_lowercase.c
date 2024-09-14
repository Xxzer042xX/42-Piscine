/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:45:54 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/07 18:45:54 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function to check if a string contains only lowercase alphabetic characters
int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
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

	str = "Hello";
	write (1, &(char){ft_str_is_lowercase(str) + '0'}, 1);
	return (0);
}
*/
