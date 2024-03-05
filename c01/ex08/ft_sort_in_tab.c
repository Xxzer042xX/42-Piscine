/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:38:18 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/29 12:38:19 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

//Fonction pour afficher un entier
void	ft_putnbr(int nb)
{
	char c;
	if (nb < 0)
	{
			write(1, "-", 1);
		if (nb == -2147483648)
		{
				write(1, "2", 1);
			nb = -147483648;
		}
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

// Fonction pour échanger deux entiers
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// Fonction pour trier un tableau d'entiers par ordre croissant
void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	pos;

	start = 0;
	while (start < size - 1) // Itère sur chaque élément du tableau
	{
		pos = 0;
		while (pos < size - start - 1)
		{
			if (tab[pos] > tab[pos + 1])
			{
				ft_swap(&tab[pos], &tab[pos + 1]);
			}
			pos++;
		}
		start++;
	}
}

int	main(void)
{
	int	tab[] = {42, 24, 12, 89, 5};
	int	size;
	int	i;

	size = 5;
	i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		ft_putnbr(tab[i]);
		write(1, ", ", 2);
		i++;
	}
	return (0);
}

