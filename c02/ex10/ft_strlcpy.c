/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:51:58 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/08 11:51:58 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function to copy a string to a destination buffer with size limit
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && (i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write (1, "-2147483648", 1);
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	if (nb >=10)
		ft_putnbr( nb / 10);
	write (1, &(char){nb % 10 + '0'}, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str++, 1);
	}
}

int	main(void)
{
	char src[] = {"Hello World"};
	char dest[3];
	unsigned int	len;

	len = (unsigned)ft_strlcpy(dest, src, 2);
	ft_putnbr(len);
	write(1, "\n", 1);
	ft_putstr(dest);
	return (0);
}
*/
