/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:20:31 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/07 19:20:31 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function to check if a string contains only printable characters
int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}
/*
#include <unistd.h>

int	main(void)
{
	char tab[] = {10, 12};

	write (1, &(char){ft_str_is_printable(tab) + '0'}, 1);
	return (0);
}
*/
