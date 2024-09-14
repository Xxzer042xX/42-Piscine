/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:53:58 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/07 18:53:58 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function to check if a string contains only uppercase alphabetic characters
int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
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

	str = "HELLO";
	write (1, &(char){ft_str_is_uppercase(str) + '0'}, 1);
	return (0);
}
*/
