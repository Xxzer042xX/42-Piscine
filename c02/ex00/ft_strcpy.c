/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:09:32 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/29 17:09:32 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies the value of src to dest, and returns the pointer of dest
char	*ft_strcpy(char *dest, char *src)
{
	char	*p_dest;

	p_dest = dest;
	while (*src)
		*p_dest++ = *src++;
	*p_dest = '\0';
	return (dest);
}
/*
#include <unistd.h>

void    ft_putstr(char *str)
{
     while (*str)
	 	write (1, str++, 1);
}

int	main(void)
{
	char *str;
	char dest[6];

	str = "hello";
	ft_putstr(ft_strcpy(dest, str));
	return (0);
}
*/
