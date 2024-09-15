/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:44:34 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 14:44:34 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Concatenates n characters from src to dest and returns dest
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*p_dest;

	p_dest = dest;
	while (*p_dest)
		p_dest++;
	while (*src && nb-- > 0)
		*p_dest++ = *src++;
	*p_dest = 0;
	return (dest);
}
/*
#include <unistd.h>
#include <stdlib.h>

void    ft_putstr(char *str)
{
    while (*str)
        write (1, str++, 1);
}

int main(int ac, char **av)
{
	if (ac == 4)
		ft_putstr(ft_strncat(av[1], av[2], atoi(av[3])));
    write (1, "\n", 1);
	return (0);
}
*/