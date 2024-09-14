/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:31:59 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/09/05 18:31:59 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_convector(unsigned char c)
{
	if (c < 10)
		return ('0' + c);
	return ('a' + (c - 10));
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[3];

	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			hex[0] = '\\';
			hex[1] = ft_convector((unsigned char)*str / 16);
			hex[2] = ft_convector((unsigned char)*str % 16);
			write (1, hex, 3);
		}
		else
			write (1, str, 1);
		str++;
	}
}
/*
int main(int ac, char **av)
{
    if (ac == 2)
        ft_putstr_non_printable(av[1]);
    write (1, "\n", 1);
    return (0);
}
*/