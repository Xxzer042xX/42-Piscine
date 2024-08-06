/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 10:46:23 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/08/02 10:46:23 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Declaration of functions defined in ft_convert_base2.c
int		ft_strlen(char *str);
char	*convert_to_base(int num, char *base);

int	is_valid_char(char c, char *base)
{
	if (c == '+' || c == '-' || c <= 32 || c == 127)
		return (0);
	while (*base)
	{
		if (c == *base++)
			return (0);
	}
	return (1);
}

// Function to check if the base string is valid
int	is_valid_base(char *base)
{
	int	i;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (!is_valid_char(base[i], base + i + 1))
			return (0);
		i++;
	}
	return (1);
}

// Function to convert a character to its corresponding value in a given base
int	char_to_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

// Function to convert a string to an integer based on the given base
int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	base_len;
	int	value;

	result = 0;
	sign = 1;
	base_len = ft_strlen(base);
	while (*str <= 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		value = char_to_value(*str, base);
		if (value == -1)
			break ;
		result = result * base_len + value;
		str++;
	}
	return (result * sign);
}

// Function to convert a number from one base to another base
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	num;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	return (convert_to_base(num, base_to));
}
