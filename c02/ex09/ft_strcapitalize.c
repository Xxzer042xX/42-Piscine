/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:27:39 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/08 00:27:39 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function to capitalize the first letter of each word in a string
char	*ft_strcapitalize(char *str)
{
	char	*orig;

	orig = str;
	if (*str && (*str >= 'a' && *str <= 'z'))
		*str -= 32;
	str++;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (!((*(str - 1) >= 'a' && *(str - 1) <= 'z') || \
				(*(str - 1) >= 'A' && *(str - 1) <= 'Z') || \
				(*(str - 1) >= '0' && *(str - 1) <= '9')))
				*str -= 32;
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			if ((*(str - 1) >= 'a' && *(str - 1) <= 'z') || \
				(*(str - 1) >= 'A' && *(str - 1) <= 'Z') || \
				(*(str - 1) >= '0' && *(str - 1) <= '9'))
				*str += 32;
		}
		str++;
	}
	return (orig);
}
/*
#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(void)
{
	char src[] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
	ft_putstr(ft_strcapitalize(src));
	return (0);
}
*/
