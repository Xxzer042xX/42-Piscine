/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:02:00 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/08 00:02:00 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function to convert all alphabetic characters in a string to uppercase
char	*ft_strupcase(char *str)
{
	char	*p_str;

	p_str = str;
	while (*p_str)
	{
		if (*p_str >= 'a' && *p_str <= 'z')
			*p_str -= 32;
		p_str++;
	}
	return (str);
}
/*
#include <unistd.h>


void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1); 
}

int	main(void)
{
	char tab[] = {"hello"};
	ft_putstr(ft_strupcase(tab));
	return (0);
}
*/