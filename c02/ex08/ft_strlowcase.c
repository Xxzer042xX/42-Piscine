/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:18:06 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/08 00:18:06 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function to convert all alphabetic characters in a string to lowercase
char	*ft_strlowcase(char *str)
{
	char	*p_str;

	p_str = str;
	while (*p_str)
	{
		if (*p_str >= 'A' && *p_str <= 'Z')
			*p_str += 32;
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
	char str[] = {"HELLO"};
	ft_putstr(ft_strlowcase(str));
	return (0);
}
*/
