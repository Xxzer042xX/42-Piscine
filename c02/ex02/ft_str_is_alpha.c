/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 00:01:04 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/07 00:01:04 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function to check if a string contains only alphabetic characters
int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			str++;
		else
			return (0);
	}
	return (1);
}
/*
#include <unistd.h>

int	main(void)
{
	char *str;

	str = "he4llo";
	write (1, &(char){ft_str_is_alpha(str) + '0'}, 1);
	return (0);
}
*/