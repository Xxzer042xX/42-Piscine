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
	while (*src && nb > 0)
	{
		*p_dest++ = *src++;
		nb--;
	}
	*p_dest = 0;
	return (dest);
}
/*
#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
        write (1, str++, 1);
}

int main(void)
{
    char    dest[] = "hello " ;
    char    src[] = "world!";

    ft_putstr(ft_strncat(dest, src, 2));
    return (0);
}
*/
