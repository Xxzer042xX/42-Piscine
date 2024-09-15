/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:37:34 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/31 20:37:34 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Copies the string given as argument into a new string.
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*p_dest;

	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!(dest))
		return (NULL);
	p_dest = dest;
	while (*src)
		*p_dest++ = *src++;
	*p_dest = *src;
	return (dest);
}
/*
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_putstr(ft_strdup(av[1]));
	write (1, "\n", 1);
	return (0);
}
*/