/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:16:23 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/08 19:16:23 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Converts a character to its hexadecimal value(hexa = 16)
char	conv_low(unsigned char c)
{
	if (c < 10)
		return ('0' + c);
	else
		return ('a' + (c - 10));
}

//Displays a non-printable character in hexadecimal
void	aff_non_printable(unsigned char c)
{
	char	hexa[2];

	hexa[0] = conv_low(c / 16);
	hexa[1] = conv_low(c % 16);
	write(1, "\\", 1);
	write(1, hexa, 2);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
			aff_non_printable(*str);
		str++;
	}
}
