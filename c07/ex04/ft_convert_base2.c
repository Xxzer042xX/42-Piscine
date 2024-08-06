/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 10:46:27 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/08/02 10:46:27 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Function to calculate the length of a string
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/*Function to calculate the length of the number
when represented in the given base*/
int	get_num_length(int num, int base_len)
{
	int	length;

	length = 0;
	if (num <= 0)
		length = 1;
	while (num != 0)
	{
		num /= base_len;
		length++;
	}
	return (length);
}

// Function to fill the result string with the number in the given base
void	fill_base_str(char *result, int num, int base_len, char *base)
{
	result[--result[0]] = '\0';
	if (num == 0)
		result[0] = base[0];
	else
	{
		if (num < 0)
		{
			result[0] = '-';
			num = -num;
		}
		while (num)
		{
			result[--result[0]] = base[num % base_len];
			num /= base_len;
		}
	}
}

// Function to convert a number to a string in the given base
char	*convert_to_base(int num, char *base)
{
	int		base_len;
	int		length;
	char	*result;

	base_len = ft_strlen(base);
	length = get_num_length(num, base_len);
	result = (char *)malloc(length + 1);
	if (!result)
		return (NULL);
	result[0] = length;
	fill_base_str(result, num, base_len, base);
	return (result + 1);
}
