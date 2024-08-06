/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:16:06 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/13 13:16:06 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function to compute the length of a string
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

//Checks if the database is valid
int	ft_is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[0] || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || \
			(base[i] >= '\t' && base[i] <= '\r'))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

// Returns the character index in the database, -1 if not found
int	ft_in_base(char c, char *base)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

// Skip white spaces and determine the sign
void	ft_prepare_str(char **str, int *sign)
{
	*sign = 1;
	while (**str == ' ' || (**str >= '\t' && **str <= '\r'))
		(*str)++;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			*sign *= -1;
		(*str)++;
	}
}

// Converts the beginning of the string into an integer according to the base
int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	base_len;
	int	index;

	sign = 0;
	result = 0;
	base_len = ft_strlen(base);
	index = 0;
	if (!ft_is_valid_base(base))
		return (0);
	ft_prepare_str(&str, &sign);
	while (*str != '\0')
	{
		index = ft_in_base(*str, base);
		if (index == -1)
			break ;
		result = result * base_len + index;
		str++;
	}
	return (result * sign);
}
