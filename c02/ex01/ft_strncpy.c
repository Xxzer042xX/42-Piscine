/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 08:56:33 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/06 08:56:33 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies the n first characters of src to dest, and returns the value of dest
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*p_src;
	char	*p_dest;

	p_src = src;
	p_dest = dest;
	while (*p_src && n)
	{
		*p_dest++ = *p_src++;
		n--;
	}
	while (n)
	{
		*p_dest++ = '\0';
		n--;
	}
	return (dest);
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
	char *src;
	char dest[6];

	src = "hello";
	ft_putstr(ft_strncpy(dest, src, 2));
	return (0);
}
*/