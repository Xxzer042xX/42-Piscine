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
	char	*p_str;

	p_str = str;
	if (*p_str && (*p_str >= 'a' && *p_str <= 'z'))
		*p_str -= 32;
	p_str++;
	while (*p_str)
	{
		if (*p_str >= 'a' && *p_str <= 'z')
		{
			if (!((*(p_str - 1) >= 'a' && *(p_str - 1) <= 'z') || \
				(*(p_str - 1) >= 'A' && *(p_str - 1) <= 'Z') || \
				(*(p_str - 1) >= '0' && *(p_str - 1) <= '9')))
				*p_str -= 32;
		}
		else if (*p_str >= 'A' && *p_str <= 'Z')
		{
			if ((*(p_str - 1) >= 'a' && *(p_str - 1) <= 'z') || \
				(*(p_str - 1) >= 'A' && *(p_str - 1) <= 'Z') || \
				(*(p_str - 1) >= '0' && *(p_str - 1) <= '9'))
				*p_str += 32;
		}
		p_str++;
	}
	return (str);
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
