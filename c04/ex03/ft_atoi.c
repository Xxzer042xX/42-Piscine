/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:49:05 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/11 19:49:05 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Convert a string to an integer
int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 0;
	result = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r') || \
		(*str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign += 1;
		str++;
	}
	if (sign % 2 != 0)
		sign = -1;
	else
		sign = 1;
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * sign);
}
