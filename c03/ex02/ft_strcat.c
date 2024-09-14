/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:33:35 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 14:33:35 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Concatenates src to dest and returns dest
char	*ft_strcat(char *dest, char *src)
{
	char	*p_dest;

	p_dest = dest;
	while (*p_dest)
		p_dest++;
	while (*src)
		*p_dest++ = *src++;
	*p_dest = *src;
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
    char    dest[] = "hello ";
    char    src[] = "world!";
    ft_putstr(ft_strcat(dest, src));

}
*/
