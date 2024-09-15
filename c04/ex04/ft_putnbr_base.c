/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:55:12 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/13 12:55:12 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Checks if the base is valid
int	ft_is_valid_base(char *base)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = base;
	if (!base || *(base + 1) == '\0')
		return (0);
	while (*ptr1)
	{
		if ((*ptr1 == '+' || *ptr1 == '-' || *ptr1 == ' ') || \
			(*ptr1 >= '\t' && *ptr1 <= '\r'))
			return (0);
		ptr2 = ptr1 + 1;
		while (*ptr2)
		{
			if (*ptr1 == *ptr2)
				return (0);
			ptr2++;
		}
		ptr1++;
	}
	return (1);
}

//Main function for displaying the number in the database
void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		base_len;

	nb = nbr;
	if (!ft_is_valid_base(base))
		return ;
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_len < 2)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= base_len)
	{
		ft_putnbr_base(nb / base_len, base);
		ft_putnbr_base(nb % base_len, base);
	}
	else
		write(1, &base[nb], 1);
}
/*I.A*/