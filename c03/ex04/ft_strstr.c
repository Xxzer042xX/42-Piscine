/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:49:03 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 14:49:03 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Searches for the first occurrence
char	*ft_strstr(char *str, char *to_find)
{
	char	*p_str;
	char	*p_to_find;

	if (!(*to_find))
		return (str);
	while (*str)
	{
		p_str = str;
		p_to_find = to_find;
		while (*p_str && *p_str == *p_to_find)
		{
			p_str++;
			p_to_find++;
		}
		if (!(*p_to_find))
			return (str);
		str++;
	}
	return ((void *) 0);
}
/*
#include <stdlib.h>

char	*ft_recursive_strstr(char *str, char *to_find)
{
	char *p_str;
	char *p_to_find;

	if (!(*to_find))
		return (str);
	if (!(*str))
		return ((void *)0);
	if (*str == *to_find)
	{
		p_str = str + 1;
		p_to_find = to_find + 1;
		while (*p_str && *p_str == *p_to_find)
		{
			p_str++;
			p_to_find++;
		}
		if (!(*p_to_find))
			return (str);
	}
	return ft_recursive_strstr(str + 1, to_find);
}

void	ft_pustr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_pustr(ft_recursive_strstr(av[1], av[2]));
	return (0);
}
*/