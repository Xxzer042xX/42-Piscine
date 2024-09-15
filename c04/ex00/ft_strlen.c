/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:07:44 by mdelmeni          #+#    #+#             */
/*   Updated: 2023/11/19 22:07:44 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns the length of a string
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}
/*
#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d", ft_strlen(av[1])); 
	printf("\n");
	return (0);
}
*/