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

// Vérifie si la base est valide
int	ft_is_valid_base(char *base)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = base;
	if (base == NULL || *(base + 1) == '\0')
		return (0);
	while (*ptr1)
	{
		if (*ptr1 == '+' || *ptr1 == '-')
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

// Fonction principale pour afficher le nombre dans la base donnée
void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		base_len;

	nb = nbr;
	base_len = 0;
	if (!ft_is_valid_base(base))
		return ;
	while (base[base_len] != '\0')
		base_len++;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb >= base_len)
	{
		ft_putnbr_base(nb / base_len, base);
		ft_putnbr_base(nb % base_len, base);
	}
	else
		write (1, &base[nb], 1);
}
